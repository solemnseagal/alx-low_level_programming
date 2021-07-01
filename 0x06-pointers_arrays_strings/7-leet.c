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
char s1[] = "aAeEoOtTlL";
char s2[] = "4433007711";
for (; s[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (s[i] == s1[j])
{
s[i] = s2[j];
}
}
}
return (s);
}
