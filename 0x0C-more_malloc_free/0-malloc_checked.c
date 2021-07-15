#include <stdlib.h>
#include "holberton.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: size to be allocated
 * Return: pointer to allocated memory.
 **/
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (!mem)
		exit(98);

	return (mem);
}
