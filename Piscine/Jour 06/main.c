//
//  main.c
//  Ex42_Day06
//
//  Created by ITSMAIL on 02/06/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>

//00 print_program_name
void ft_print_program_name(char *name)
{
    while (*name != 0) {
        write(1, name, 1);
        name++;
    }
    
}

//01 print_params
void ft_print_params(char *arguments)
{
    while (*arguments)
    {
        write(1, arguments, 1);
        arguments++;
    }
    
}//02 rev_params
void ft_rev_params(char *arguments)
{
    while (*arguments)
    {
        write(1, arguments, 1);
        arguments++;
    }
}


int main(int argc, char * argv[]) {
    
    //00 test print_program-name
    //ft_print_program_name(argv[0]);
    //write(1,"\n", 1);
    
    //printf("%d\n", argc);

    /*01 test print_params
    int i;
    i = 1;
    while (i < argc)
    {
        ft_print_params(argv[i]);
        write(1, "\n", 1);
        i++;
    }*/
    
    /*02 test rev_params
    int y;
    y = argc - 1;
    while (y > 0)
    {
        ft_rev_params(argv[y]);
        ft_rev_params("\n");
        y--;
    }*/
    
    return 0;
   
}
