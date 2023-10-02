#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: size of argv
 * @argv: array of size argc
 * Return: Return 0 if multiplicstion success else 1
 */
int main(int argc, char *argv[])
{
(void) argc;

if (argv[1] && argv[2])
{
int x = atoi(argv[1]);
int y = atoi(argv[2]);

printf("%d\n", x * y);
return (0);
}
else
printf("Error\n");
return (1);
}
