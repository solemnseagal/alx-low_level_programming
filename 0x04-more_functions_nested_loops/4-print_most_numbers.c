#include "holberton.h"

/**
 * print_numbers -  print numbers from 0 to 9 except 2 and 4.
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
char num;
for (num = '0'; num <= '9'; num++)
{
if ((num != '2') && (num != '4'))
{
_putchar (num + '0');
}
}
_putchar ('\n');
return (0);
}
