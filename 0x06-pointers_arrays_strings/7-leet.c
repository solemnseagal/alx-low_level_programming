#include <stdio.h>

/**
 * leet - check the code for ALX School students.
 *
 *@s: passed parameter.
 * Return: Always s.
 */
char *leet(char *s)
{
int i = 0, j;
while (s[i] != '\0')
{
i++;
}
for (j = 0; j < i - 1; j++)
{
if ((s[j] == 'a') || (s[j] == 'A'))
{
s[j] = '4';
}
else if ((s[j] == 'e') || (s[j] == 'E'))
{
s[j] = '3';
}
else if ((s[j] == 'o') || (s[j] == 'O'))
{
s[j] = '0';
}
else if ((s[j] == 'l') || (s[j] == 'L'))
{
s[j] = '1';
}
else if ((s[j] == 't') || (s[j] == 'T'))
{
s[j] = '7';
}
}
return (s);
}
