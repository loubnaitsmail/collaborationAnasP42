//
//  main.c
//  Ex42_Day04
//
//  Created by ITSMAIL on 30/05/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>

//00 strlen
int ft_strlen (char *str)
{
    int i;
    
    i = 0;
    while (str[i] != 0) {
        i++;
    }
    return i;
}

//01 putstr
void ft_putstr(char *str)
{
    int i;
    i = 0;
    while (str[i] != 0) {
        write(1, &str[i], 1);
        i++;
    }
}

//02 putnbr
void ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        // write(1, "-2147483648", 1); ?? ne fonctionne pas
        write(1, "-2", 2);
        nb = 147483648;
    }
    
    if (nb < 0) {
        write(1, "-", 1);
        nb = - nb;
    }
     
    if (nb >= 10)
    {
        ft_putnbr(nb / 10);
    }
    
    nb = nb % 10 + '0';
    write(1, &nb, 1);
}

//03 atoi ASCII to integer
int ft_atoi(char *str)
{
    int Negative;
    int convertInt;
    
    Negative = 1;
    convertInt = 0;
    
    //Nombre arbitraire
    while (*str == '+' || *str == '-' || (*str > 8 && *str < 33))
    {
        if (*str == '-')
            Negative = Negative * -1;
            str++;
    }
    
    while (*str)
    {
        if (*str >= '0' && *str <= '9')
            convertInt = convertInt * 10 + *str - 48;
       
        //if (*str > 32 && *str < 127)
            
        str++;
    }

    return (convertInt * Negative);
    
}

//04 putnbr_base
void ft_putnbr_base(int nbr, char *base)
{
    int lentBase;
    int i;
    int j;
    
    lentBase = 0;
    i = 0;
    
    //Calcule longueur base
    while (base[lentBase] != 0)
        lentBase++;
    
    //Error
    if (*base == 0 || *base == '+' || *base == '-' || lentBase == 1)
        //|| *base < 32 || *base > 126
    return 0;
    
    //Error caractère identique
    while (base[i])
    {
        j = i + 1;
        while (base[j])
        {
            if (base[i] == base[j])
                return;
            j++;
        }
        i++;
    }
           
    //MINIMUN int
    if (nbr == -2147483648)
    {
        write(1, "-2", 2);
        nbr = 147483648;
    }
    
    if (nbr < 0)
    {
        write(1, "-", 1);
        nbr = -nbr;
    }
    
    if (nbr >= lentBase)
    {
        nbr = nbr / lentBase;
        ft_putnbr_base(nbr, base);
    }
    
    nbr = nbr % lentBase;
    write(1, &base[nbr], 1);
}

//05 atoi base
int convertCharToInt(char c, char *base)
{
    int i;
    i = 0;
    
    while (base[i])
    {
        if (base[i] == c)
            c = i;
        i++;
    }
    //printf("%d\n", c);
    return c;
    
}

int ft_atoi_base(char *str, char *base)
{
    int negative;
    int result;
    int lentbase;
    
    negative = 1;
    result = 0;
    lentbase = 0;
    result = 0;
    
    while (base[lentbase])
        lentbase++;
    
    if (lentbase == 0 || lentbase == 1)
        return 0;
    
    //ATOI
    while (*str == '+'|| *str == '-' || (*str > 8 && *str < 33))
    {
        if (*str == '-')
            negative = negative * -1;
        
        str++;
    }
        
    while (*str)
    {
        //if (convert >= '0' && convert <= '9')
            result = result * lentbase + convertCharToInt(*str, base);
        
        result = result * negative;
        str++;
    }
   
    return (result);
}

int main(int argc, const char * argv[]) {
    //00 test strlen
    //char *texte = "loubna";
    //int lent = ft_strlen(texte);
    //printf("%d", lent);
    
    //01 test putstr
    //ft_putstr(texte);
    
    //02 test putnb
    //int nbr = -2147483648;
    //ft_putnbr(nbr);
    
    //03 test atoi convertInt à compléter ??
    char *chaine = "   ++---E214748h0000";
    int returnNbr = ft_atoi(chaine);
    printf("%d", returnNbr);
    
    //04 test putnbr_base
    //char *base = "0123456789ABCDEF";
    //int nbr = 15;
    //ft_putnbr_base(nbr, base);
    
    //05 test
    char *base2 = "0123456789";
    char *chaine2 = "   1234";
    int returnNbr2;
    //returnNbr2 = ft_atoi_base(chaine2, base2);
    //printf("%d", returnNbr2);
    
    
    return 0;
}
