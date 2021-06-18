#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, last_digit;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
last_digit = n % 10;
if (last_digit < 5)
{
printf("Last digit of %d is less than 5\n", n);
}
else if (last_digit > 5)
{
printf("Last digit of %d is greater than 5\n", n);
}
else
printf("Last digit of %d is zero\n", n);
return (0);
}
