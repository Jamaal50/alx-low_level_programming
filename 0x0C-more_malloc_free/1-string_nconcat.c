#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @string: a string
 * Return: length of string(i)
 */

int _strlen(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
		;
	return (i);
}

/**
 * string_nconcat - concatenates two strings: s1 and n bytes of s2, return
 * ptr to string
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes of string 2 to concatenate
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int len, num, i, j;

	num = n;

	if (s1 == NULL) /* account for NULL string 1 */
		s1 = "";
	if (s2 == NULL) /* account for NULL string 2 */
		s2 = "";
	if (num < 0) /* acccount for negative n bytes */
		return (NULL);
	if (num >= _strlen(s2)) /* account for n bytes too big*/
		num = _strlen(s2);

	len = _strlen(s1) + num + 1; /* +1 accounts for terminating null byte */

	ptr = malloc(sizeof(*ptr) * len); /*malloc and check for error */
	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++) /* concatenate */
		ptr[i] = s1[i];
	for (j = 0; j < num; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';

	return (ptr);
}
