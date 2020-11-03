//
//  main.c
//  gnl_anas
//
//  Created by ITSMAIL on 02/10/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#define BUFF_SIZE 20

//lire le buffer tant qu'il n'a pas trouvé de /n
//*line = buffer
//deplacer ce qu'il y a apres le /n VERS 0
//buf = " 1\nL"
//transformer > buff = "L"
//if buff[i] = '\n'
// tous ce qui est dans la ligne ne doit plus etre dans buff ft_memmove, deplacer une zone memoire à la première
int contain(char *str, char c)
{
    int i = 0;
    while (str[i])
    {
        if(str[i] == c)
            return(i);
        i++;
    }
    return(-1);
}

int get_next_line(const int fd, char **line)
{
    static char buf[BUFF_SIZE];
    unsigned long i;
    long long int read_return;
    static char *save_buf;
    //int malloc_size_add = 0;
    
    *line = NULL;
    static int nbr_buff_size = 0;

    if (fd < 0 || !line || read(fd, buf, 0) == -1)
        return (-1);
    
    //printf("before loop\n");
    while ((read_return = read(fd, buf, BUFF_SIZE)) > 0)
    {
        printf("Save_buf: [%s]\n", save_buf);
        printf("Buffer: [%s]\n", buf);
        
        i = 0;
        buf[read_return] = '\0';
        while (buf[i] != '\n' && buf[i] != '\0') // i<read_return pour les int
            i++;
        
        if (*line == NULL)
        {
            *line = malloc(sizeof(char) * (i + 1)); //ft_memalloc
            printf("malloc : %lu\n", i + 1);
        }
        else if (*line != NULL)
        {
            *line = realloc(*line, (BUFF_SIZE * nbr_buff_size) + i + 1);
            printf("realloc : %lu\n", (BUFF_SIZE * nbr_buff_size) + i + 1);
            printf("i = %lu\n", i);
        }
        
        if (save_buf != NULL)
        {
            printf("*IF save_buff n'était PAS NULL = [%s]\n", save_buf);

            int len = strlen(save_buf);
            save_buf = realloc(save_buf, BUFF_SIZE + len + 1);
            strcat(save_buf, buf);
            printf("Save buff after ADD buf = [%s]\n", save_buf);
            
            int index = contain(save_buf, '\n');
            if (index != -1) //si save_budd contient \n
            {
                printf("**IF save_buff contient un retour à la ligne\n");
                int s = 0;
                char *tmp1 = malloc(index + 1);
                char *tmp2 = malloc(len - index + 1);
                int s2 = 0;
            
                while (save_buf[s])
                {
                    if (index > s)
                        tmp1[s] = save_buf[s];
                    else if (index == s)
                        tmp1[s] = '\0';
                    else if (index < s)
                    {
                        tmp2[s2] = save_buf[s];
                        s2++;
                    }
                    s++;
                }
                tmp2[s2] = '\0';
                printf("tmp1 : [%s]\n", tmp1);
                printf("tmp2 : [%s]\n", tmp2);
                strcat(*line, tmp1);
                printf("line = tmp1 : [%s]\n", *line);
                save_buf = realloc(save_buf, strlen(tmp2));
                strcpy(save_buf, tmp2);
                printf("save_buf = tmp2 : [%s]\n", save_buf);
               // memcpy(save_buf, tmp2, strlen(tmp2));
               // free(tmp1);
               // free(tmp2);
                return(1);
            }
            else // si save_buff ne contient pas de \n
            {
                printf("**ELSE save_buff ne contient PAS de retour à la ligne\n");
                strcat(*line, save_buf);
                printf("line += Save_buff: [%s]\n", *line);
                save_buf = realloc(save_buf, 0); //free
            }
        }
        
        else
        {
            strncat(*line, buf, i);
            printf("1 First line += Buff : [%s]\n\n", *line);
        }
        
        nbr_buff_size++;

        if (buf[i] == '\n')
        {
            printf("*IF first buf contient un retour à la ligne\n");

            save_buf = malloc(sizeof(char) * BUFF_SIZE - i + 1);
            if (i + 1 < read_return)
            {
                int tmp = i;
                int j = 0;
                while (tmp != read_return)
                {
                    save_buf[j] = buf[tmp + 1]; //enlever le /n ?
                    buf[tmp] = '\0'; // il vide apparemment
                    tmp++;
                    j++;
                }
                save_buf[j] = '\0';
                printf("Save_buff : [%s]\n", save_buf);
            }
            return (1); //ligne lue
        }
    }
    
    if (*save_buf != '\0') // tmp2 contient quelque chose
    {
        printf("*IF *save_buff n'était PAS VIDE\n");
        printf("save_buff: [%s]\n", save_buf);

        int len = contain(save_buf, '\n');
        if (len != -1) // si save_buff contient '\n' encore ???
        {
            printf("**IF save_buff contient un retour à la ligne");
            int length = strlen(save_buf);
            int i = 0;
            int j = 0;
            char *tmp3 = malloc(len + 1);
            char *tmp4 = malloc(BUFF_SIZE - len + 1);

            printf("debug tmp3 : %s\n", tmp3);
            
            while (i != length)
            {
                //printf("char[%c]\n", save_buf[i]);
                if (i < len)
                    tmp3[i] = save_buf[i];
                else if (i == len)
                    tmp3[i] = '\0';
                else
                {
                    //printf("i > len : char[%c]\n", save_buf[i]);
                    tmp4[j] = save_buf[i];
                    j++;
                }
                i++;
            }
            tmp4[j] = '\0';
            printf("tmp3 : [%s]\n", tmp3);
            printf("tmp4 : [%s]\n", tmp4);

            *line = tmp3;
            printf("final line (tmp3) : [%s]\n", *line);
            
            save_buf = realloc(save_buf, j);
            strcpy(save_buf, tmp4);
            printf("final save_buff (tmp4)  = [%s]\n", save_buf);
            return(1);
        }
        else // si save_buff ne contient pas de '\n'
        {
            printf("**ELSE save_buff ne contient PAS de retour à la ligne\n");
            *line = save_buf;
            save_buf = realloc(save_buf, 0); //free
            return (1);
        }
    }
    
    if (*line == NULL)
    {
        *line = malloc(1); //ft_memalloc
        *line[0] = '\0';
    }
    
    
    return(0); // fini de tous lire
}

int main(int argc, const char * argv[]) {
    
    int fd = open("test.txt", O_RDONLY);
    char *line;
    int result;

    result = get_next_line(fd, &line);
    printf("*Result 1 : %s\n\n", line);

    result = get_next_line(fd, &line);
    printf("*Result 2 : %s\n\n", line);

    result = get_next_line(fd, &line);
    printf("*Result 3 : %s\n\n", line);
    
    result = get_next_line(fd, &line);
    printf("*Result 4 : %s\n\n", line);
    
    result = get_next_line(fd, &line);
    printf("*Result 5 : %s\n\n", line);
    
    //result = get_next_line(fd, &line);
    //printf("result 4 : %s\n\n", line);

    return 0;
}

