//
//  main.c
//  Ex 42-00 putchar putnbr V2
//
//  Created by ITSMAIL on 19/05/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>
//00
void ft_putchar(char c){
    write(1, &c, 1);
    write(1, "\n", 1);
}
//01
void ft_print_alphaber(void){
    char c = 'a';
    while (c <= 'z') {
        write(1, &c, 1);
        c++;
    }
    write(1, "\n", 1);
    }
//02
void ft_print_reverse_alphabet(void){
    char c = 'z';
    while (c >= 'a') {
        write(1, &c, 1);
        c--;
    }
    write(1, "\n", 1);
}
//03
void ft_print_numbers(void){
    char c = '0';
    while (c <= '9') {
        write(1, &c, 1);
        c++;
    }
    write(1, "\n", 1);
}
//04
void ft_is_negatuve(int n){
    char c;
    if (n < 0)
        c = 'N';
    else
        c = 'P';
    
    write(1, &c, 1);
    write(1, "\n", 1);
}

//05
void ft_print_comb(void){
    char a = '0';
    char b, c;
    
    while (a <= '9') {
        b = a + 1;
        
        while (b <= '9') {
            c = b + 1;
            
            while (c <= '9') {
                write(1, &a, 1);
                write(1, &b, 1);
                write(1, &c, 1);
                write(1, ", ", 2);
                c++;
            }
            b++;
        }
        a++;
    }
}
//06 Numbers 0 > 10
void print_number (int i){
    int div, rest;
    div = i / 10 + '0';
    rest = i % 10 + '0';
    write(1, &div, 1);
    write(1, &rest, 1);
}

void ft_print_comb2(void){
    int a = 0;
    int b;
    
    while (a <= 99) {
        b = a + 1 ;
        while (b <= 99) {
            print_number(a);
            write(1, " ", 1);
            print_number(b);
            write(1, ", ", 2);
            b++;
        }
        a++;
    }
}

//07
void ft_putnbr(int nb){
    if (nb < 0){
        write(1, "-", 1);
        nb = -nb;
    }
    if (nb >= 10) {
        ft_putnbr(nb / 10);
    }
    nb = nb % 10 + '0';
    write(1, &nb, 1);
}

//08
void ft_print_combn(int n){
    char tab[n];
    int i;
    
}



int main(int argc, const char * argv[]) {
//00 test
    //ft_puchar('A');
//01 test
    //ft_print_alphaber();
//02 test
    //ft_print_reverse_alphabet();
//03 test
    //ft_print_numbers();
//04 test
    //ft_is_negatuve(0);
//05 test Combo
    //ft_print_comb();
//06 test comb2
    //ft_print_comb2();
//07 test number
    //ft_putnbr(-15);
//08 test comb n
    
    
    return 0;
}
