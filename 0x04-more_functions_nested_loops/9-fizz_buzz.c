#include<stdio.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */

int main(void)
{
int i;
for (i = 1; i < 100; i++)
{
((i % 15 == 0)) ? printf("%s ", "FizzBuzz")
: (i % 3 == 0) ? printf("%s ", "Fizz")
: (i % 5 == 0) ? printf("%s ", "Buzz")
: printf("%d ", i);
}
printf("Buzz");
printf("\n");
return (0);
}
