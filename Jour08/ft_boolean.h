//
//  ft_boolean.h
//  Ex42_Day08
//
//  Created by ITSMAIL on 16/06/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

//01
#ifndef ft_boolean_h
#define ft_boolean_h

//lib for write func
#include <unistd.f>

//constantes de préprocesseur
#define EVEN(nbr)(nbr % 2 == 0) //macro avec paramètres
#define TRUE 1
#define FALSE 0
#define EVEN_MSG "I have an even number of arguments.\n"
#define ODD_MSG "I have an odd number of arguments.\n"
#define SUCCESS 0

//type
typedef int t_bool;

//prototypes
void ft_putstr(char *str);
t_bool ft_is_even(int nbr);

#endif /* ft_boolean_h */
