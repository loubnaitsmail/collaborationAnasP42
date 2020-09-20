//
//  main.c
//  Ex42_Day03
//
//  Created by ITSMAIL on 27/05/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

#include <stdio.h>

//00 strcmp
int ft_strcmp(char *s1, char *s2)
{
    int i;
    int j;
    i = 0;
    j = 0;
    
    while (s1[i] != 0 ) {
        i++;
    }
    i += 1;
    
    while (s2[j] != '\0')
    {
        j++;
    }
    j += 1;
    
    if (i > j) {
        return 1;
    }
    else if (i < j)
    {
        return -1;
    }
    else
        return 0;
}
//00 autre possibilité trouvée mais à comprendre mieux
int        ft_strcmp2(char *s1, char *s2)
{
    int        i;
    i = 0;
    while (s1[i] == s2[i] && s1[i] & s2[i])
        i++;
    return (s1[i] - s2[i]);
}

//01 strncmp
int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int i;
    i = 0;
    if (n == 0)
        return 0;
    while (s1[i] == s2[i] && s1[i] &&s2[i] && i < n) {
        i++;
    }
    return (s1[i] - s2[i]);
}

//02 strcat
char    *ft_strcat(char *dest, char *src)
{
    int        i;
    int        j;

    i = 0;
    while (dest[i] != 0)
        i++;
    
    j = 0;
    while (src[j] != 0)
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0';
    return (dest);
}

//03 strncat
char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i;
    int j;
    
    i = 0;
    while (dest[i] != 0 && i < nb)
        i++;
    
    j = 0;
    while (src[j] != 0 && i < nb)
    {
        dest[i] = src[j];
        j++;
        i++;
    }
    
    dest[i] = '\0';
    return dest;
}
//04 strstr
char *ft_strstr(char *str, char *toFind)
{
    int i;
    int j;
    
    // si toFind est vide, renvoi de str
    j = 0;
    if (toFind[j] == 0)
        return str;
    
    i = 0;
    while (str[i] != 0)
    {
        j = 0;
        while (toFind[j] == str[i + j])
        {
            if (toFind[j + 1] == '\0')
                return &str[i];
            j++;
        }
        i++;
    }

    return 0;
    }

//05 strlcat
unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    int i;
    int j;
    int lent;
    
    i = 0;
    while (dest[i] != 0 && i < size)
        i++;
    
    j = 0;
    while (src[j] != 0 && i < size)
    {
        dest[i] = src[j];
        i++;
        j++;
        
    }
    
    dest[i] = '\0';
    lent = i;
    
    return lent;
}

int main(int argc, const char * argv[]) {
    //00 test strcmp
    char *s1 = "texte";
    char *s2 = "tex";
    
    int retour = ft_strcmp(s1, s2);
    //printf("%d", retour);
    
    //01 test strncmp
    int n = 2;
    int retour2 = ft_strncmp(s1, s2, n);
    //printf("%d", retour2);
    
    //02 test strcat
    char destination[100] = "texte";
    char *source = "text";
    ft_strcat(destination, source);
    //printf("%s", destination);
    
    //03 test strncat
    char destination2[100] = "texte";
    char *source2 = "text";
    int nb = 6;
    ft_strncat(destination, source, nb);
    //printf("%s", destination);
    
    //04 test strstr
    char *fullText = "bonjour à tous";
    char *toFind = "ur à tous";
    char *whatFind = ft_strstr(fullText, toFind);
    //printf("%s", whatFind);
    
    //05 test strlcat
    char text[100] = "lou";
    char *toAdd = "bna";
    int nbr = 10;
    int lent = ft_strlcat(text, toAdd, nbr);
    printf("%d", lent);
    
    return 0;
}
