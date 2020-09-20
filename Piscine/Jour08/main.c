//
//  main.c
//  Ex42_Day08
//
//  Created by ITSMAIL on 16/06/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

#include <stdio.h>
#include "ft_stock_str.h"
#include <stdlib.h>
#include <unistd.h>

//04 ft_dtrs_to_tab tableau de structure
int ft_strlen(char *tab)
{
    int i;
    
    i = 0;
    while (tab[i])
        i++;
    
    return i;
}

char *ft_duplicate(char *tab)
{
    char *copy;
    int i;
    
    if(!(copy = malloc(sizeof(char) * ft_strlen(tab) + 1)))
        return NULL;
    
    i = 0;
    while (tab[i])
    {
        copy[i] = tab[i];
        i++;
    }
    
    copy[i] = '\0';
    return copy;
}

struct s_stock_str *ft_dtrs_to_tab(int ac, char **av)
{
    int i;
    t_stock_str *tabStruct;
    
    // allocation memoire
    if (!(tabStruct = malloc(sizeof(t_stock_str) * ac + 1)))
        return NULL;
        
    // transforme element tab en structure
    i = 0;
    while (i < ac)
    {
        tabStruct[i].size = ft_strlen(av[i]);
        
        if(!(tabStruct[i].str = malloc(sizeof(char) * ft_strlen(av[i] + 1))))
            return NULL;
        tabStruct[i].str = av[i];
        
        if(!(tabStruct[i].copy = malloc(sizeof(char) * ft_strlen(av[i] + 1))))
            return NULL;
        
        tabStruct[i].copy = ft_duplicate(av[i]);
        
        i++;
    }
    
    tabStruct[i].str = 0;
    return tabStruct;
    
}

//05
void ft_putstr(char *str)
{
    
    while (*str)
    {
        write(1, str, 1);
        str++;
    }
}

void ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        write(1, "-2", 2);
        nb = 147483648;
    }
    
    if (nb < 0)
    {
        write(1,"-", 1);
        nb = -nb;
    }
    
    if (nb >= 10)
    {
        ft_putnbr(nb / 10);
        nb = nb % 10 + '0';
        write(1, &nb, 1);
    }
}

void ft_show_tab(struct s_stock_str *par)
{
    int i;
    
    i = 0;
    while (par[i].str)
    {
        ft_putstr(par[i].str);
        write(1, "\n", 1);
        
        ft_putnbr(par[i].size);
        write(1, "\n", 1);
        
        ft_putstr(par[i].copy);
        write(1, "\n", 1);
        
        i++;
    }
}

int main(int argc, const char * argv[]) {
    //04 test
    //05 test
    
    return 0;
}
