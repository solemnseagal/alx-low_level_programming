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
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++, len++)
		;

	strDup = malloc(sizeof(char) * (len + 1));

	if (!strDup)
		return (NULL);

	for (index = 0, len = 0; s1[index]; index++, len++)
		strDup[len] = s1[index];

	for (index = 0; index < n && s2[index]; len++, index++)
		strDup[len] = s2[index];

	strDup[len] = '\0';

	return (strDup);
}
