#include<stdio.h>
#include "holberton.h"

/**
 * reset_to_98 - reset value of n using pointers.
 *
 *@n: passed as parameter.
 * Return: void.
 */
void reset_to_98(int *n)
{
int *p;
p = n;
*p = 98;
/*
 *or:
 *int p;
 *p = 98;
 *\*n = p;
 *
 *or simply:
 *\*n = 98;
 */
}
