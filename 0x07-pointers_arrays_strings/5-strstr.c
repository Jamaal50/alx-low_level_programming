#include "main.h"
/**
 * _strstr - function to locate a substring
 * @haystack: string
 * @needle: substring
 * Return: pointer to the beginning of a needle
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *start = haystack;
char *needlestr = needle;

while (*needlestr == *haystack && *needlestr != '\0'
&& *haystack != '\0')
{
haystack++;
needlestr++;
}
if (*needlestr == '\0')
return (start);
haystack = start + 1;
}
return ('\0');
}
