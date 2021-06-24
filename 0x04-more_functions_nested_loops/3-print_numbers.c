#include<stdio.h>
#include "holberton.h"

/**
 * print_numbers - check the code for ALX School students.
 *
 *@_putchar: used to print numbers from 0 to 9
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
int num;
for (num = 48; num <= 57; num++)
{
_putchar(num);
}
_putchar('\n');
}
