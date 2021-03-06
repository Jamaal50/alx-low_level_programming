#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @n: number of integers passed to the function
 * @separator: the string to be printed between numbers
 *
 * Return: None.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(valist, int));
			if (separator && i < n - 1)
				printf("%s", separator);
		}
	}

	va_end(valist);

	printf("\n");
}
