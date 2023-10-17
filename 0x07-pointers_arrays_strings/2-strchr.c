#include "main.h"
/**
 * *_strchr - locates a characater in string
 * @s: pointer to a string
 * @c: character to be found
 * Return: pointer to first occurence of c
 */
char *_strchr(char *s, char c)
{
while (*s != c)
if (!*s++)
return (0);
return (s);
}
