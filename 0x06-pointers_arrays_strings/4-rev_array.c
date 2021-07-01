#include <stdio.h>

/**
 * reverse_array - check the code for ALX School students.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
int tmp, i, j;
j = n - 1;
for (i = 0; i < n / 2; i++)
{
tmp = a[i];
a[i] = a[j];
a[j] = tmp;
j--;
}
}
