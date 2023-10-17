#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random number and determines
 * whether the last digit of a given number is * positive, negative or zero.
 * Return: Always 0 (sucess)
 */

int main(void)
{
int n;
int last;

n = rand() - RAND_MAX / 2;
last = (n % 10);

printf("Last digit of %d ", n);

if (last > 5)
printf("is %d and is greater than 5\n", last);

else if (last < 6 && last != 0)
printf("is %d and is less than 6 and not 0\n", last);

else if (last == 0)
printf("is %d and is 0\n", last);

return (0);
}

