//
//  main.c
//  Ex42_Day05
//
//  Created by ITSMAIL on 31/05/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

#include <stdio.h>

//00 itarative factorial
int ft_iterative_factorial(int nb)
{
    int i;
    int result;
    
    i = 1;
    result = 1;
    
    if (nb < 0)
        return 0;
    
    if (nb == 0)
        return 1;
    
    while (i <= nb)
    {
        result = result * i;
        i++;
    }
    
    return result;
}

//01 recursive factirial
int ft_recusive_factorial(int nb)
{
    int result;

    if (nb == 0)
        return 1;
    
    if (nb < 0)
        return 0;
    
    result = nb * ft_recusive_factorial(nb - 1);
    return result;
}

//02 iterative power
int ft_iterative_power(int nb, int power)
{
    int i;
    int result;
    
    i = 1;
    result = 1;
   
    if (power < 0)
        return 0;
    
    if (power == 0)
        return 1;
    
    while (i <= power) {
        result = result * nb;
        i++;
    }
    
    return result;
}

//03 recursive power
int ft_recursive_power(int nb, int power)
{
    int result;
    result = 1;
    
    if( power < 0)
        return 0;
    if (power == 0)
        return 1;
    
    result = nb * ft_recursive_power(nb, power - 1);
    return result;
}

//05 fibonacci
int ft_fibonacci(int index)
{
    int result;
    
    if (index < 0)
        return -1;
    
    if (index == 0)
        return 0;
    
    if (index == 1)
    return 1;
    
    result = ft_fibonacci(index - 1) + ft_fibonacci(index -2);
    return result;
}

//05 racine carré
int ft_sqrt(int nb)
{
    int i;
    int result;
    
    i = 1;
    result = 0;
    
    if (nb < 0)
        return 0;
    
    if (nb == 0)
        return 0;
    
    if (nb == 1)
        return 1;
    
    while (i * i < nb)
        i++;
    
    if (i * i == nb)
        return i;
    else
        return 0;
}

//06 Prime
int ft_is_prime(int nb)
{
    int i;
    
    if (nb <= 1)
        return 0;
    
    i = 2;
    while (i < nb)
    {
        if (nb % i == 0)
            return 0;
        i++;
    }
    return 1;
}

int main(int argc, const char * argv[]) {
    //00 test iterative
    //int nbr = 5;
    //int factorial = ft_iterative_factorial(nbr);
    //printf("%d", factorial);
    
    //01 test recursive
    //int nbr2 = 1;
    //int factorial2 = ft_recusive_factorial(nbr2);
    //printf("%d", factorial2);
    
    //02 test iterative power
    //int nbr3 = 3;
    //int power = 3;
    //int resultPower = ft_iterative_power(nbr3, power);
    //printf("%d", resultPower);
    
    //03 test recusive power
    //int nbr4 = 3;
    //int power2 = 3;
    //int resultPower2 = ft_recursive_power(nbr4, power2);
    //printf("%d", resultPower2);
    
    //04 test fibonacci
    //int index = 6;
    //int fibonnacci = ft_fibonacci(index);
    //printf("%d", fibonnacci);
    
    //05 test racine carré
    //int nbr5 = 10000;
    //int racineCarre = ft_sqrt(nbr5);
    //printf("%d", racineCarre);
    
    //05 test Prime
    int nbr6 = 17;
    int prime = ft_is_prime(nbr6);
    printf("%d", prime);
    
    //06 test 
    return 0;
}




