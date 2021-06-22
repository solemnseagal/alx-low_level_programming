#include"holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char name[9] = "Holberton";
int index;
for (index = 0; name[index] != '\0'; index++)
{
_putchar(name[index]);
}
_putchar('\n');
return (0);
}
