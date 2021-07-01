#include <stdio.h>

/**
 * _strncat - check the code for ALX School students.
 *
 *@src: passed parameter.
 *@n: passed parameter.
 *@dest: passed parameter
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int i,j = 0;
i = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
if (j < n)
{
dest[i] = src [j];
}
else
{
break;
}
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
