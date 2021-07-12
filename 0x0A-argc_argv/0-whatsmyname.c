#include <stdio.h>
/**
 * main - prints the number of arguenments passed to it
 * @argc: arguemnet count
 * @argv: array of pointer to arguement strings
 * Return: 0
 **/

int main(int argc, char *argv[])
{
	if (argc >= 0)
	{
		printf("%s\n", argv[argc - 1]);
	}
	return (0);
}
