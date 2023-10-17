#include "main.h"
/**
 * leet - translates string to 1337
 * @string: pointer to string
 * Return: returns translated string
 */
char *leet(char *string)
{
int a;
int b;

char lower[] = "aeotl";
char upper[] = "AEOTL";
char numbers[] = "43071";

for (a = 0; string[a] != '\0'; a++)
{
for (b = 0; lower[b] != '\0' && upper[b] != '\0'; b++)
{
if (string[a] == lower[b] || string[a] == upper[b])
{
string[a] = numbers[b];
break;
}
}
}
return (string);
}
