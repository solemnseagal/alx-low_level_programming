#include<stdio.h>
/**
 * _isupper - check the code for ALX School students.
 *
 * Return: 1 if uppercase and 0 is lower case.
 */
int _isupper(int c)
{
if ((c >= 65) && (c <= 90))
{
return (1);
}else if ((c <= 122) && (c >= 97))
{
return (0);
}
 return (0);
}
