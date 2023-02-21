#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _isalpha - Check Holberton
 * @c: An input character
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase or 0 if is uppercase
 */
int _isalpha(int c)
{
        char l = (char) c;

        if (isalpha(l))
        {
        return (1);
        }
        else
        {
        return (0);
        }




}
