#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char name[9] = "Holberton";
int index;
for (index = 0; index < 9; index++)
{
putchar(name[index]);
}
putchar(\n);
return (0);
}
