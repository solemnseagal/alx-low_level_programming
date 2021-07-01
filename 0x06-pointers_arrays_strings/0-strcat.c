#include "holberton.h"
#include <stdio.h>
/**
 * _strcat - check the code for ALX School students.
 *
 *@dest: passed parameter.
 *@src: passed parameter.
 *
 * Return:  dest.
 */
char *_strcat(char *dest, char *src)
{
int i, j = 0;
i = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}
dest[i] = '\0';
return (dest);
}
