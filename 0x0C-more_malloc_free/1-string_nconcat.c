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
	unsigned int len = n, index = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (; s1[index] != '\0'; index++, len++)
		;

	strDup = malloc(sizeof(char *) * (1 + len));
	if (strDup == NULL)
		return (NULL);

	for (index = 0; s1[index] != '\0'; index++)
		strDup[index] = s1[index];

	len = 0;

	for (len = 0; len < n && s2[len] != '\0'; len++)
	{
		strDup[index] = s2[len];
		index++;
	}
	strDup[index] = '\0';

	return (strDup);
}
