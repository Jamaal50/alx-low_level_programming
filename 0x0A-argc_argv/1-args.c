#include <stdio.h>
/**
 * main - Entry point
 * @argc: size of argv
 * @argv: array size of argc
 * Return:  Always 0 success
 */
int main(int argc, char *argv[])
{
int x;

for (x = 0; x < argc; x++)
{
argv[x] = argv[x];
}
printf("%d\n", (x - 1));
return (0);
}
