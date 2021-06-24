#include "holberton.h"

/**
 * print_diagonal - check the code for ALX School students.
 *
 *@n: parameter parsed
 *
 */
void print_diagonal(int n)
{
int i, p;
for (i = 0; i < n; i++)
{
for (p = 0; p < i; p++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
if (n <= 0)
_putchar('\n');
return;
}
