//
//  main.c
//  Ex42_Day07
//
//  Created by ITSMAIL on 04/06/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

//00 strdup = dupliquer chaine
char *ft_strdup(char *src)
{
    char *duplicate;
    int i;
    int lent;
    
    if (*src == 0)
        return NULL;

    lent = 0;
    while (src[lent] != 0)
        lent++;
    
    duplicate = malloc(sizeof(char) * lent + 1);

    i = 0;
    while (i < lent)
    {
        duplicate[i] = src[i];
        i++;
    }
    
    duplicate[i] = '\0';
    
    return duplicate;
}

//01 ft_range
// min = 3  max = 5 3 4
int *ft_range(int min, int max)
{
    int *tab;
    int i;
    int len;
    
    if (min > max)
        return 0;
    
    len = max - min;
    tab = malloc(sizeof(int) * len);
    
    i = 0;
    while (min < max)
    {
        tab[i] = min;
        i++;
        min++;
    }
    return tab;
}
 
//02 Ultimate Range
int ft_ultimate_range(int **range, int min, int max)
{
    int *tab;
    int i;
    int lent;
    
    if (min >= max)
    {
        *range = NULL;
        return 0;
    }
    
    lent = max - min;
    
    if (!(tab = malloc(sizeof(int) * lent)))
        return -1;
    
    i = 0;
    while (min < max)
    {
        tab[i] = min;
        i++;
        min++;
    }
    
    *range = tab;
    //free(tab);
    return i;
}

//03 strJOIN concatenate
int ft_strlen(char *str)
{
    int len;
    
    len = 0;
    while (str[len])
        len++;
    
    return len;
}

                  
char *ft_strjoin(int size, char **strs, char *sep)
{
    char *lastChar;
    int i;
    int lent;

    /*if (size > sizeof(strs))
        size = sizeof(strs);
    printf("%d", size);*/
    
//Allocation mémoire
    i = 0;
    lent = 0;
    while (i < size)
    {
        lent = lent + ft_strlen(strs[i]) + ft_strlen(sep);
        i++;
    }
    
    if (!(lastChar = malloc(sizeof(char) * lent + 1)))
        return NULL;

//if Error
    if (size == 0)
        return lastChar;
    
//CONCATENATE
    int a;
    int b;
    int c;
    int k;
    
    a = 0;
    k = 0;
    while (a < size)
    {
        b = 0;
        while (strs[a][b])
        {
            lastChar[k] = strs[a][b];
            b++;
            k++;
        }
        c = 0;
        while (sep[c] && a != size - 1)
        {
            lastChar[k] = sep[c];
            c++;
            k++;
        }
        a++;
    }
    
    lastChar[k] = '\0';
    return lastChar;
}

//04 Convert Base??
int convertToInt(char c)
{
    if (c >= '0' && c <= '9')
        return (int)c - 48;
    else
        return (int)c - 'A' + 10;   //-55
}

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
    char finalChar = '\0';
    int resultConvert = 0;
    int lent;
    
    lent = 0;
    while (*nbr != 0)
        lent++;
        
    while (*nbr)
    {
        resultConvert = resultConvert * lent + convertToInt(*nbr);
        nbr++;
    }
    
    return finalChar;
}


int main(int argc, const char * argv[])
{
    //00 test strdup ??? ne fonctionne pas
    char *test1 = "bonjour à tous";
    ft_strdup(test1);
    //printf("%s", test1);
    
    //01 test range
    int min = 3;
    int max = 6;
    int *tab;
    tab = ft_range(min, max);
    //printf("%d", tab[2]);
    free(tab);
    
    //02 test utlimate range ?? int **range
    int min2 = 3;
    int max2 = 8;
    int retour;
    int *range;
    retour = ft_ultimate_range(&range, min2, max2);
    //printf("%d", retour);
    
    //03 test strjoin Conatenate
    char *tabPrenom[] = {"salma", "loubna" ,"rania"};
    char *sep = ", ";
    int size = 3;
    char *concatenate;
    concatenate = ft_strjoin(size, tabPrenom, sep);
    //printf("%s", concatenate);
    free(concatenate);
    
    
    return 0;
}
