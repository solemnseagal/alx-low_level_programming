#include <stdio.h>

/**
 * string_toupper - check the code for ALX School students.
 *
 *@str: passed parameter
 *
 * Return: str.
 */
char *string_toupper(char *str)
{
int cap, small, p, k, j = 0;
char a[26], i[26];
cap = 65;
small = 97;
/* assign asci characters to an array*/
for (p = 0; cap < 91; cap++)
{
a[p] = cap;
p++;
}
for (p = 0; small < 123; small++)
{
i[p] = small;
p++;
}
/*end of asci character array */
while (str[j] != '\0')
{
/* find each element of a string and replace it with uppercase */
for (k = 0; k < 25; k++)
{
if (str[j] == i[k])
{
str[j] = a[k];
}
}
j++;
}
return (str);
}
