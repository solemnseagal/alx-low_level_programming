#include <stdio.h>
/**
 * _strcmp - check the code for ALX School students.
 *
 * @s1: passed parameter.
 * @s2: passed parameter.
 *
 * Return: either 1 or 0.
 */
int _strcmp(char *s1, char *s2)
{
int i = 0, j = 0;
if (s1[j] == s2[j] && s1[j] != '\0')
{
j++;
}
else
{
i = s1[j] - s2[j];
return (i);
}
return (0);
}

