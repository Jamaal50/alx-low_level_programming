#include "main.h"
/**
 * _strspn - gets the legth of a prefix substring
 * @s: char string array
 * @accept: char array to check bytes with
 * Return: Number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
int x, y, z;

x = 0;
z = 0;

while (s[x] != '\0')
{
y = 0;
while (accept[y] != '\0')
{
if (s[x] == accept[y])
{
z++;
break;
}
y++;
}
if (accept[y] == '\0')
break;
x++;
}
return (z);
}
