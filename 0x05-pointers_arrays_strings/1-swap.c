#include "main.h"
/**
 * swap_int - swap the value of two integars
 * @a: pointer
 * @b: pointer
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}

