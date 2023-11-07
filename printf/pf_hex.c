/* ************************************************************************** */
/*                                                                            */
/*                                                         :::     ::::::::   */
/*  pf_hex.c                                              :+:     :+:    :+:  */
/*                                                      +:+ +:+        +:+    */
/*  By: anoukan <anoukan@student.42mulhouse.fr>       +#+  +:+      +#+       */
/*                                                  +#+#+#+#+#+  +#+          */
/*  Created: 06/11/2023 14:18:23 by anoukan              #+#   #+#            */
/*  Updated: 06/11/2023 14:18:23 by anoukan             ###  ##########.fr    */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void    pf_hex2(int n, char *alpha)
{
    char    hex[20];
    int     i;
    int     quotient;
    int     reminder;
    int     start;
    int     end;
    char    temp[20];
    int     isNegative;

    i = 0;
    isNegative = 0;
    if (n == 0)
        hex[i++] = '0';
    else 
    {
        if (n < 0)
        {
            isNegative = 1;
            n = -n;
        }
        while (n > 0)
        {
            quotient = n / 16;
            reminder = n % 16;
            hex[i++] = alpha[reminder];
            n = quotient;
        }
        if (isNegative)
            hex[i++] = '-';
    }
    start = 0;
    end = i - 1;
    while (start < end)
    {
        *temp = hex[start];
        hex[start] = hex[end];
        hex[end] = *temp;
        start++;
        end--;
    }
    hex[i] = '\0';
    ft_putstr(hex);
}

void    pf_hex(int n, int params)
{
    char *upperCase;
    char *lowerCase;

    upperCase = "0123456789ABCDEF";
    lowerCase = "0123456789abcdef";
    if (params == 0)
        pf_hex2(n, lowerCase);
    else
        pf_hex2(n, upperCase);
}

/*

code de veliga

// pass a number, get it's hex value at digit place
static char    get_digit(unsigned int number, int digit)
{
    while (digit)
    {
        number = number / 16;
        digit--;
    }
    number = number % 16;
    if (number <= 9)
        return (number + '0');
    else
        return (number - 10 + 'A');
}

// Print the pointer in hex upper case
int    ft_puthexu_fd(unsigned int number, int fd)
{
    int        digit;
    char    buffer;
    _Bool    start_print;
    int        result;

    digit = 8;
    start_print = 0;
    result = 0;
    while (digit >= 0)
    {
        buffer = get_digit(number, digit--);
        if (buffer != '0' || start_print || digit < 0)
        {
            if (ft_putchar_fd(buffer, fd) == ERROR)
                return (ERROR);
            start_print = 1;
            result++;
        }    
    }
    return (result);
}*/
