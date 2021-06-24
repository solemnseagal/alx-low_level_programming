#include "holberton.h"

/**
 * print_square - check the code for ALX School students.
 *
 *@size: parameter parsed
 *
 */
void print_square(int size)
{
int i, p;
for (i = 0; i < size; i++)
{
for (p = 0; p < size; p++)
{
_putchar('#');
}
_putchar('\n');
}
if (size <= 0)
_putchar('\n');
return;
}
