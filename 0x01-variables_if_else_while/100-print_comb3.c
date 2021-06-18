#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'and that piece of art is useful" - Dora Korpar, 2015-10-19'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
for(j = i + 1; j <= 9; j++)
{
if (i == j)
{
continue;
}
putchar(i + '0');
putchar(j + '0');
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
