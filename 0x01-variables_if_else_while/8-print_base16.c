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
char ch, i;
for (ch = '0'; ch <= '9'; ch++)
{
putchar(ch);
}
for (i = 'a'; i <= 'f'; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
