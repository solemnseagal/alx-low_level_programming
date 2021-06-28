#include <stdio.h>
/**
 * swap_int - swapping values of a and b.
 *
 * @a: passed pointer parameter.
 * @b: passed pointer parameter.
 * Return: void.
 */
void swap_int(int *a, int *b)
{
int p;
p = *a;
*a = *b;
*b = p;
}
