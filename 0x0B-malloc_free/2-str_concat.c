#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: Contents 1
 * @s2: Contents 2
 * Return: NULL
 */
char *str_concat(char *s1, char *s2)
{
char *p;
int a, b, e, f;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (a = 0; s1[a] != '\0'; a++)
;
for (b = 0; s2[b] != '\0'; b++)
;

p = malloc((a * sizeof(*s1)) + (b * sizeof(*s2)) + 1);
if (p == NULL)
return (NULL);

for (e = 0, f = 0; e < (a + b + 1); e++)
{
if (e < a)
p[e] = s1[e];
else
p[e] = s2[f++];
}
return (p);
}

