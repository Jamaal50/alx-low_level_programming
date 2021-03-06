#include <stdio.h>

/**
 * main - Prints alphabets in lowercase, then uppercase.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z') /*prints lowercase alphabets*/
	{
		putchar(lower);
		lower++;
	}

	while (upper <= 'Z') /*prints uppercase alphabets*/
	{
		putchar(upper);
		upper++;
	}

	putchar('\n');

	return (0);
}
