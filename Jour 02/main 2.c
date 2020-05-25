//
//  main.c
//  Ex42 ft_print_memory test
//
//  Created by ITSMAIL on 18/05/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <unistd.h>

/*
void browseBlock(char *tab){
    int i;
    int val;
    for (i = 0; i < strlen(tab); i++) {
        
        //if (i == 0 || (tab[i] == '\n' && (i + 1) < strlen(tab))) {
        if (i == 0 || tab[i - 1] == '\n'){
        char *adresse;
        adresse = &tab[i];
            
            if (i != 0){
                write(1, "\n", 1);
            }
        //print_address_hex(adresse);
        write(1, ": ", 2);
        }
        
    
        val = charToInt(tab[i]);
        decimalToHexa(val);

        if (i % 2 == 1)
        write(1, " ", 1);
        
    }
    //printText(tab);
}*/

//-------------???
 
 void write_char(char c){
     write(1, &c, 1);
 }

char hex_digit(int v) {
    if (v >= 0 && v < 10)
        return '0' + v;
    else
        return 'a' + v - 10; // <-- Here
}

void print_address_hex(void* p0) {
    int i;
    uintptr_t p = (uintptr_t)p0;

    //write_char('0'); write_char('x');
    for(i = (sizeof(p) << 3) - 4; i>=0; i -= 4) {
        write_char(hex_digit((p >> i) & 0xf));
    }
}

void convertToHexadecimal (int nbr)
{
    int div;
    int mod;
    char hex[] = "0123456789abcdef";
    
    div = nbr / 16;
    mod = nbr % 16;
    
    write(1, &hex[div], 1);
    write(1, &hex[mod], 1);
}

int convertCharToInt(char c)
{
    return c;
}

void printText (char *str)
{
    int i;
    i = 0;
    while (str[i] != 0)
    {
        if (str[i] < 32 || str[i] > 126)
        {
            write(1, ".", 1);
        }
        else
        {
            write(1, &str[i], 1);
        }
        
        i++;
    }
}

void ft_print_memory(char *tab, int size)
{
    int i;
    int returnConvertedInt;
    
    //print adresse
    char *adresse;
    adresse = &tab[0];
    print_address_hex(adresse);
    
    write(1, " :", 2);
    
    for (i = 0; i < strlen(tab); i++)
    {
    //print hexa
    returnConvertedInt = convertCharToInt(tab[i]);
    convertToHexadecimal(returnConvertedInt);
        
    //espace 2 caractères
        if (i % 2 == 1)
        {
            write(1, " ", 1);
        }
    }
   
    //print text
    printText(tab);
}



int main(int argc, const char * argv[]) {
    //char *textStart = "Bonjour les amin\nches...c est fo\nu.tout.ce qu on \npeut faire avec.\n..print_memory..\n..lol.lol. .\n";
        //browseBlock(textStart);

    char *texte = "Bonjour les amis";
    ft_print_memory(texte, 15);
    
    return 0;
}
