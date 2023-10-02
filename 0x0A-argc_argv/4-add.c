#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: size of argv
 * @argv: array of size argc
 * Return: 0 if successful 1 if error
 */
int main(int argc, char *argv[])
{
int sum, x;
char *y;
int val;

sum = 0;
if (argc > 1)
{
for (x = 1; argv[x]; x++)
{
val = strtol(argv[x], &y, 10);
if (!*y)
sum += val;
else
{
printf("Error\n");
return (1);
}
}
}
printf("%d\n", sum);
return (0);
}
