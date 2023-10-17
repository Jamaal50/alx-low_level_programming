#include "main.h"
/**
 * cap_string - capitalizes the words of a string
 * @s: string
 * Return: s
 */
char *cap_string(char *s)
{
int x, y;
int trigger;
char nots[] = ",;.!?(){}\n\t\" ";

for (x = 0, trigger = 0; s[x] != '\0'; x++)
{
if (s[0] > 96 && s[0] < 123)
trigger = 1;
for (y = 0; nots[y] != '\0'; y++)
{
if (nots[y] == s[x])
trigger = 1;
}
if (trigger)
{
if (s[x] > 96 && s[x] < 123)
{
s[x] -= 32;
trigger = 0;
}
else if (s[x] > 64 && s[x] < 91)
trigger = 0;
else if (s[x] > 47 && s[x] < 58)
trigger = 0;
}
}
return (s);
}
