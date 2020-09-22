//
//  main.c
//  ft_strsplit.c
//
//  Created by ITSMAIL on 20/09/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

#include "libft.h"

int is_char(char current, char c)
{
    if (current == c)
        return (1);
    return (0);
}

int count_words(char *str, char c)
{
    int words;
    int i;
    
    i = 0;
    words = 0;
    while (str[i])
    {
        if (str[i] && is_char(str[i], c))
            i++;
        else if (str[i] && !is_char(str[i], c))
        {
            words++;
            while (str[i] && !is_char(str[i], c))
                i++;
        }

    }
    return (words);
}

char *duplicate(char *str, char nbr_caracters)
{
    int i;
    char *dest;
    
    i = 0;
    if (!(dest = (char *) malloc(sizeof(char) * (nbr_caracters + 1))))
        return (NULL);
    while (str[i] && i < nbr_caracters)
    {
        dest[i] = str[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

char **fill_tab(char **final_str, char *str, char c, int size)
{
    int caracters;
    int count;
    int i;
    
    i = 0;
    count = 0;
    while (count < size)
    {
        caracters = 0;
        while (str[i] && is_char(str[i], c))
            i++;
        while (str[i] && !is_char(str[i], c))
        {
            caracters++;
            i++;
        }
        final_str[count] = duplicate(&str[i - caracters], caracters);
        count++;
    }
    return (final_str);
    
}

char **ft_strsplit(char const *s, char c)
{
    int words;
    char **final_str;
    
    words = count_words((char *)s, c);
    if (!(final_str = (char **) malloc(sizeof(char *) * (words + 1))))
        return (NULL);
    final_str = fill_tab(final_str, (char *)s, c, words);
    final_str[words] = 0;
    return (final_str);
}
                         
int main(int argc, const char * argv[]) {
    // insert code here...
    char *str = "*salut*les***etudiants*";
    char c = '*';
    char **final = ft_strsplit(str, c);
    int i = 0;
    while (final[i]) {
        printf("%s\n", final[i]);
        i++;
    }
    return 0;
}
