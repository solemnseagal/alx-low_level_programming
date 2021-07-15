#include "holberton.h"
#include <stdlib.h>
/**
 * *string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: limit of s2
 * Return: pointer to new space in memory or null
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strDup;
	int i = 0;
	unsigned int k = 0;
	unsigned int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;

	strDup = malloc(sizeof(char *) * (1 + i + n));

	while (s1[k] != '\0')
	{
		strDup[k] = s1[k];
		k++;
	}

	while (j < n && s2[j] != '\0')
	{
		strDup[k] = s2[j];
		k++;
		j++;
	}
	strDup[k] = '\0';

	return (strDup);
}
