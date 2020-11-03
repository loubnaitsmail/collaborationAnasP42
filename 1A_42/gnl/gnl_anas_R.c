//
//  gnl_anas_R.c
//  
//
//  Created by ITSMAIL on 22/10/2020.
//

#include "gnl_anas_R.h"

int get_next_line(const int fd, char **line)
{
    static char buf[BUFF_SIZE];
    unsigned long i;
    long long int read_return;
    static char *save_buf;
    
    *line = NULL;
    static int nbr_buff_size = 0;

    if (fd < 0 || !line || read(fd, buf, 0) == -1)
        return (-1);
    
    while ((read_return = read(fd, buf, BUFF_SIZE)) > 0)
    {
        printf("Buffer: [%s]\n", buf);
        
        i = 0;
        buf[read_return] = '\0';
        while (buf[i] != '\n' && buf[i] != '\0') // i<read_return pour les int
            i++;
        
        if (*line == NULL)
            *line = malloc(sizeof(char) * (i + 1)); //ft_memalloc

        else if (*line != NULL)
            *line = realloc(*line, (BUFF_SIZE * nbr_buff_size) + i + 1);
        strncat(*line, buf, i);
        nbr_buff_size++;

        if (buf[i] == '\n')
        {
            return (1); //ligne lue
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

    return 0;
}
