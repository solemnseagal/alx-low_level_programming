#include "holberton.h"
/**
* _isalpha - Print the alphabet in lowercase.
*
* Return: 0 if variable c is not a letter or 1 if c is a letter, uppercase or lowercase.
*/
int _isalpha (int c)
{
if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
