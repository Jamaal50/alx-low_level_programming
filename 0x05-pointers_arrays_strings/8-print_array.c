#include "main.h"
#include <stdio.h>
/**
 * print_array - prints elements of an array of integers
 * @a: array
 * @n: number of elements of array toto be printed
 * Return: Always 0 (Success)
 */
void print_array(int *a, int n)
{
int x;

x = 0;
for (n = n - 1; n >= 0; n--, x++)
{
printf("%d", a[x]);
if (n > 0)
{
printf(", ");
}
}
printf("\n");
}
