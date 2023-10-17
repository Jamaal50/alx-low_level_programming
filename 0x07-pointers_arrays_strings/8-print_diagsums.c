#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print the sum of 2 diagonals
 * @a: 2d array of int type
 * @size: size of array (square)
 */
void print_diagsums(int *a, int size)
{
int x, sum, sizer;

x = 0;
sum = 0;
sizer = size * size;
while (x < sizer)
{
if (x % (size + 1) == 0)
sum += a[x];
x++;
}
printf("%d, ", sum);

sum = 0;
x = 0;

while (x < sizer)
{
if (x % (size - 1) == 0 && x != (sizer - 1) && x != 0)
{
sum += a[x];
}
x++;
}
printf("%d\n", sum);
}
