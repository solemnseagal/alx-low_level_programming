#include <stdio.h>
/**
 *_memcpy -   fills memory with a constant byte
 *@dest: pointer block of memory to fill
 *@src: value to set
 *@n: bytes of the memory
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *ptr, *b;
*ptr = dest;
*b = src;
while (n-- > 0)
{
*ptr++ = *b;
b++;
}
return (dest);
}
