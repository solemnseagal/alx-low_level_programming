#include <stdio.h>

char *_strchr(char *s, char c)
{
while(s++)
{
if (*s == c)
return (s);
}
return (0);
}
