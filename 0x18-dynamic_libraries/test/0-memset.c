#include "main.h"
/**
 * *_memset - fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * @s: pointer to a memory area to be filled
 * @b: character to fill the memory area with
 * @n: number of bytes to be filled
 * Return: A pointer to the filled memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int x;

for (x = 0; x < n; x++)
{
s[x] = b;
}
return (s);
}
