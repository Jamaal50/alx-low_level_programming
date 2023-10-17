#include "main.h"
/**
 * _strlen - the length of a string
 * @s: pointer to character
 * Return: length of a string
 */
int _strlen(char *s)
{
int x;

for (x = 0; s[x] != '\0'; ++x)
;

return (x);
}
