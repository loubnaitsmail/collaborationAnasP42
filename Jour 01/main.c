//
//  main.c
//  Ex42_01_V2
//
//  Created by ITSMAIL on 22/05/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>
//00
void ft_ft(int *nbr)
{
    *nbr = 42;
}

//01
void ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}

//02 swape
void ft_swap(int *a, int*b)
{
    int swap;
    swap = *b;
    *b = *a;
    *a = swap;
}

//03 div_mod
void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b ;
    *mod = a % b;
}

//04 ultimate div mod ou créer des copies de *a et *b
void ft_ultimate_div_mod(int *a, int *b){
    int div;
    int mod;
    div = *a / *b;
    mod = *a % *b;
    *a = div;
    *b = mod;
}
//05 putstr
void ft_putstr(char *str)
{
    int i;
    for (i = 0; str[i] != 0; i++)
    {
        write(1, &str[i], 1);
    }
}
/* 05 putstr IDEM
int i = 0;
while (str[i] != 0) {
    write(1, &str[i], 1);
    i++;
}
*/

//06 stren
int ft_strlen(char *str)
{
    int count;
    count = 0;
    
    while (str[count] != 0) {
        count++;
    }
    
    return count;
}

// 07 Inverser tableau
void ft_rev_int_tab(int *tab, int size)
{
    int i;
    int j;
    int swap;
    
    i = 0;
    j = size - 1;
    
    while (i < j) {
        swap = tab[i];
        tab[i] = tab[j];
        tab[j] = swap;
        i++;
        j--;
    }
}

//08 tri par ordre croissant
void ft_sort_int_tab(int *tab, int size)
{
    int i;
    int j;
    int swap;
    
    i = 0;
    
    while (i < size) {
        j = 0;
        while (j < size) {
            if (tab[i] < tab[j]) {
                swap = tab[j];
                tab[j] = tab[i];
                tab[i] = swap;
                
            }
            j++;
        }
        i++;
    }
}

int main(int argc, const char * argv[]) {
    //00 test
    int nbr = 2;
    ft_ft(&nbr);
    //printf("%d", nbr);

    //01 test créer plr var *b = &a (9*)
    
    //02 test swap
    int a = 3;
    int b = 5;
    ft_swap(&a, &b);
    //printf("Après échange, a = %d et b = %d ", a, b);
    
    //03 test div_mod
    int c = 10;
    int d = 2;
    int div, mod = 0;
    ft_div_mod(c, d, &div, &mod);
    //printf("la division = %d et le reste = %d", div, mod);
    
    //04 test ultimate div_mod
    int e = 10;
    int f = 2;
    ft_ultimate_div_mod(&e, &f);
    //printf("e = %d et f = %d", e, f);
    
    //05 test str
    char *text = "Bonjour";
    //ft_putstr(text);
    
    //06 test strlen
    char *text2 = "Bonjour";
    int count = ft_strlen(text2);
    //printf("le nombre de caractère est : %d", count);
    
    //07 test Reverse Tab
    int tab[] = {1, 2, 3};
    int size = 3;
    int i;
    ft_rev_int_tab(tab, size);
    for (i = 0; i < size; i++) {
       // printf("%d", tab[i]);
    }
    
    //08 test Order Tab
    int tab2[] = {9, 0, 6, 7, 4, 2, 1};
    int size2 = 7;
    ft_sort_int_tab(tab2, size2);
    for (i = 0; i < size2; i++) {
        printf("%d", tab2[i]);
    }
    
    
    return 0;
}
