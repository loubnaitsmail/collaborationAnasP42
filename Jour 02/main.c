//
//  main.c
//  Ex42 00-02
//
//  Created by ITSMAIL on 25/05/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>

//00 strcpy
char *ft_strcpy(char *dest, char *src)
{
    int i;
    i = 0;
    while (src[i] != 0) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

//01 strncpy
char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i;
    i = 0;
        
    while (src[i] != 0 && i < n) {
        dest[i] = src[i];
        i++;
    }
    
    while (i < n ) {
        dest[i] = '\0';
        i++;
    }
    
    return dest;
}

//02 alphabétiques
int ft_str_is_alpha(char *str){
    int i;
    i = 0;
    while (str[i] != 0) {
        if (str[i] < 'A' || (str[i] > 'z' && str[i] < 'a') || str[i] > 'z')
            return 0;
             
        i++;
        }
            return 1;
}

//03 numérique
int ft_str_is_numeric(char *str){
    int i;
    i = 0;
    while (str[i] != 0) {
        if (str[i] < '0' || str[i] >= '9')
            return 0;
        i++;
    }
    return 1;
}

//04 minuscule
int ft_str_is_lowercase(char *str)
{
    int i;
    i = 0;
    while (str[i] != 0) {
        if (str[i] < 'a' || str[i] > 'z')
            return 0;
        i++;
    }
    return 1;
}

//05 MAJUSCULE
int ft_str_is_uppercase(char *str)
{
    int i;
    i = 0;
    while (str[i] != 0) {
        if (str[i] < 'A' || str[i] > 'Z')
            return 0;
        i++;
    }
    return 1;
}

//06 Caractère imprimable
int ft_str_is_printable(char *str)
{
    int i;
    i = 0;
    while (str[i] != 0) {
        if (str[i] < 32 || str[i] > 126 ) //33 = Espace inclue printable ?
            return 0;
        i++;
    }
    return 1;
}

//07 mettre en Majuscule
char *ft_strupcase(char *str){
    int i = 0;
    while (str[i]) {
        if (str[i] >= 'a' && str[i] <= 'z')
        str[i] = str[i] - 32;//ASCII TABLE
        i++;
    }
    return str;
}
 
 //08 metre en minuscule
char *ft_strlower(char *str)
{
    int i;
    i = 0;
    while (str[i] != 0) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        i++;
    }
    return str;
}
 
//09
char *ft_strcapitalize(char *str)
{
    int i;
    int start;
    i = 0;
    start = 1;
    
    while (str[i]) {
        if (start && (str[i] >= 'a' && str[i] <= 'z'))
            str[i] = str[i] - 32;
        
        else if (!start && (str[i] >= 'A' && str[i] <= 'Z'))
            str[i] = str[i] + 32;
        start = 0;
        
        if (str[i] == 32)
             start = 1;
        i++;
    }
    return str;
}

//10 strlcpy
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    int i;
    int len;
    i = 0;
    len = 0;
    
    while (src[i] != 0) {
        dest[i] = src[i];
        i++;
    }
    //?if (size > 0)
        dest[i] = '\0';
    
    while (src[len] != 0) {
        len++;
    }
    
    return len;
}

//11
void putHexadecimal(int nonPrintable)
{
    char hex[] = "0123456789abcdef";
    int div;
    int mod;
    div = nonPrintable / 16;
    mod = nonPrintable % 16;
    
    write(1, &hex[div], 1);
    write(1, &hex[mod], 1);
    
}

void ft_putstr_non_printable(char *str)
{
    int i;
    i = 0;
    while (str[i] != 0) {
        if (str[i] < 32 || str[i] > 126) {
            write(1, "\\", 1);
            putHexadecimal(str[i]);
        }
        else
            write(1, &str[i], 1);
        i++;
    }
}
//---------------------------------------------------------------
int main(int argc, const char * argv[]) {
    //00 test strcpy
    int n = 20;
    char *source = "Bonjour\na comment ca va à ";
    char destination[n];
    
    //ft_strcpy(destination, source);
    //printf("%s", destination);
    
    //01 test strncpy
    ft_strncpy(destination, source, n);
    //printf("%s", destination);
    
    //02 test aphabétique
    int alphareturn = ft_str_is_alpha(source);
    //printf("Renvoi 1 si tous les caractères sont alphabétiques, sinon : %d\n", alphareturn);
    
    //03 test numérique
    int numeriqueReturn = ft_str_is_numeric(source);
    //printf("Renvoi 1 si tous les caractères sont numériques, sinon : %d\n", numeriqueReturn);
    
    //04 test minucule
    char *minuscule = "abcd";
    int minusculeReturn = ft_str_is_lowercase(minuscule);
    //printf("Renvoi 1 si tous les caractères sont minuscule : %d\n", minusculeReturn);
    
    //05 test MAJUSCULE
    char *majuscule = "ABGD";
    int majusculeReturn = ft_str_is_uppercase(majuscule);
    //printf("Renvoi 1 si tous les caractères sont MAJUSCULE : %d\n", majusculeReturn);
    
    //06 test printable
    char *printable = " ";
    int printableReturn = ft_str_is_printable(printable);
    //printf("Renvoi 1 si tous les caractères sont printable : %d\n", printableReturn);
    
    //07 test Mettre en Majuscule
    //08 test Mettre en Miniscule
    //09 test capitalizer
    
    //10 test strlcpy
    int strlcpyReturn = ft_strlcpy(destination, source, n);
    //printf("%d", strlcpyReturn);
    
    //11 test print hexadecimal
    ft_putstr_non_printable(source);
    
    return 0;
}
