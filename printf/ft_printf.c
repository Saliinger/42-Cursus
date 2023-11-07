/* ************************************************************************** */
/*                                                                            */
/*                                                         :::     ::::::::   */
/*  pf_printf.c                                           :+:     :+:    :+:  */
/*                                                      +:+ +:+        +:+    */
/*  By: anoukan <anoukan@student.42mulhouse.fr>       +#+  +:+      +#+       */
/*                                                  +#+#+#+#+#+  +#+          */
/*  Created: 03/11/2023 13:05:51 by anoukan              #+#   #+#            */
/*  Updated: 07/11/2023 09:29:10 by anoukan             ###  ##########.fr    */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdarg.h>

int pf_printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            format++;
            if (*format == 'd' || *format == 'i')
                //int
                ft_putnbr(va_arg(args, int));
            else if (*format == 's')
                //string
                ft_putstr(va_arg(args, char *));
            else if (*format == 'c')
                //char
                ft_putchar(va_arg(args, int));
            else if (*format == 'u') 
                //unsigned int
               ft_putnbr(va_arg(args, unsigned int)); 
            else if (*format == 'X' || *format == 'x') 
            {
                if (*format == 'x')
                    //lower hex
                    pf_hex(va_arg(args, int), 0);
                else 
                    //upper hex
                    pf_hex(va_arg(args, int), 1);
            }
            //else if (*format == 'p') 
            //{
                //void pointer in hex
            //}
            else if (*format == '%') 
                //unsigned int
               ft_putchar('%'); 

        }
        else
            ft_putchar(*format);
        format++;
    }
    va_end(args);
    return (0);
}


int main() {
    char character = 'A';
    char *string = "Hello, world!";
    int integer = 42;
    unsigned int unsignedInteger = 123;
    //void *pointer = (void *)0x12345678;

    pf_printf("Character: %c\n", character);
    pf_printf("String: %s\n", string);
    //ft_printf("Pointer: %p\n", pointer);
    pf_printf("Decimal: %d\n", integer);
    pf_printf("Unsigned Decimal: %u\n", unsignedInteger);
    pf_printf("Hexadecimal (lowercase): %x\n", unsignedInteger);
    pf_printf("Hexadecimal (uppercase): %X\n", unsignedInteger);
    pf_printf("Percent Sign: %%\n");

    return 0;
}
