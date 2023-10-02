#include "main.h"
/**
 * *_strpbrk - searched a string for any of a set of bytes
 * @s: string
 * @accept: string to match
 * Return: pointer to thebyte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
int x, y;
char *z;

x = 0;
while (s[x] != '\0')
{
y = 0;
while (accept[y] != '\0')
{
if (accept[y] == s[x])
{
z = &s[x];
return (z);
}
y++;
}
x++;
}
return (0);
}
