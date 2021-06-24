#include<stdio.h>
#include "holberton.h"
/**
 * _isdigit - check the code for digits.
 *
 *@c: Arguement passed
 *
 * Return: 1 if c is a digit and 0 if otherwise.
 */
int _isdigit(int c)
{
if ((c >= 48) && (c <= 58))
{
return (1);
}
else
{
return (0);
}
}
