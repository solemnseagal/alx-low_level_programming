#include <stdio.h>

/**
 * _strncpy - check the code for ALX School students.
 *
 *@dest: passed parameter.
 *@src: passed parameter.
 *@n: passed parameter.
 *
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
int j = 0;
while (src[j] != '\0')
{
if (j < n)
{
dest[j] = src [j];
}
j++;
}
while (j < n)
{
dest[j] = '\0';
j++;
}
return (dest);
}
