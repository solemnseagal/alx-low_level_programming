#include<stdio.h>
/**
 * _isupper - check the code for uppercase character.
 *
 * @c: parsed as parameter
 * Return: 1 if c is uppercase and 0 if c is lower case.
 */
int _isupper(int c)
{
if ((c >= 65) && (c <= 90))
{
return (1);
}
else
{
return (0);
}
}
