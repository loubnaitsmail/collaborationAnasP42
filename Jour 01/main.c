//
//  main.c
//  Ex42 C ft 01
//
//  Created by ITSMAIL on 12/05/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>


//00
void ft_ft(int *nbr){
    *nbr = 42;
}

//01
void ft_ultimate_ft(int ********nbr){
    ********nbr = 42;
}

//02
void ft_swap(int *a, int *b){
    int swap = 0;
    swap = *b;
    *b = *a;
    *a = swap;
}

//03
void ft_div_mod(int a, int b, int *div, int *mod){
    *div = a / b;
    *mod = a % b;
}

//04
void ft_ultimate_div_mod(int *a, int *b){
    int div;
    int mod;
    div = *a / *b;
    mod = *a % *b;
    *a = div;
    *b = mod;
    
    /*Other possibility
    int a_copy;
    int b_copy;
    a_copy = *a;
    b_copy = *b;
    *a = a_copy / b_copy;
    *b = a_copy % b_copy;*/
     
    }
//05
void ft_putstr(char *str){
    int i = 0;
    while (str[i] != 0)
    {
        write(1, &str[i], 1);
        i++;
    }
}

//06
int ft_strlen(char *str) {
    int count = 0;
    while (str[count] != 0) {
        count++;
    }
    return (count);
}

//07
void ft_rev_int_tab(int *tab, int size){
    int i, j, swap;
    for (i = 0, j = size - 1; i < j; i++, j--) {
        swap = tab[i];
        tab[i] = tab[j];
        tab[j] = swap;
    }
    }
    
//08
void ft_sort_int_tab(int *tab, int size){
    int i, j,swap;
    
    i = 0;
    while (i < size) {
        j = 0;
        while (j < size) {
            if(tab[i] < tab[j]){
                swap = tab[i];
                tab[i] = tab[j];
                tab[j] = swap;
            }
            j++;
        }
        i++;
    }
}



int main(int argc, const char * argv[]) {
    //00 test
    int x;
    ft_ft(&x);
    printf("x = %d\n\n", x);
    
    //01 test ????
    /*int z;
    ft_ultimate_ft(&z);
    printf("z = %d\n", z);*/
    
    //02 test
    int a = 1;
    int b = 2;
    ft_swap(&a, &b);
    printf("a = %d, b = %d\n\n", a, b);
    
    //03 test
    int c = 10;
    int d = 2;
    int div;
    int mod;
    ft_div_mod(c, d, &div, &mod);
    printf("c:%d divisé par d:%d = %d et le reste est %d\n\n", c, d, div, mod);
    
    //04 test
    int e = 10;
    int f = 2;
    ft_ultimate_div_mod(&e, &f);
    printf("e divisé par f = %d et le reste = %d\n\n", e, f);
    
    //05 test
    char *text = "bonjour à tous\n\n";
    ft_putstr(text);
    
    //06 test
    char *text2 = "123456789";
    int nombre = 0;
    nombre = ft_strlen(text2);
    printf("le nombre de caractère est : %d\n\n", nombre);
    
    // 07 test
    int tab[] = {1, 2, 3};
    int size = 3;
    ft_rev_int_tab(tab, size);
    printf("le tableau inversé est : ");
    
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }
    
    //08 test
    int tab2[] = {2, 1, 3};
    int size2 = 3;
    ft_sort_int_tab(tab2, size);
    printf("\n\nle tableau dans l'ordre croissant : ");

    int j;
    for (j = 0; j < size2; j++) {
        printf("%d ", tab2[j]);
    }
    return 0;
    
}
