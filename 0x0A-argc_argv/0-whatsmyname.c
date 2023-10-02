#include <stdio.h>
/**
 * main - Entry point
 * @argc: size of argv array
 * @argv: array of size argc
 * Return: Always 0 success
 */
int main(int argc, char *argv[])
{
int x;

for (x = 0; x < argc; x++)
{
printf("%s\n", argv[0]);
}
return (0);
}
