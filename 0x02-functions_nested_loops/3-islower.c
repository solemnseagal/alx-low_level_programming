#include "holberton.h"
/**
* _islower - Print the alphabet in lowercase.
*
* Return: 0 or 1.
*/
int _islower(int c)
{
int i;
for (i = 97; i < 123; i++)
{
if (c == i)
{
return (1);
}
else
{
return (0);
}
}
}

