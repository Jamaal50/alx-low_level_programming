#include <stdio.h>
/**
 * main - prints all arguments it receive
 * @argc: size of argv
 * @argv: array of size argc
 * Return: Always 0 Success
 */
int main(int argc, char *argv[])
{
int x;

for (x = 0; x < argc; x++)
{
printf("%s\n", argv[x]);
}
return (0);
}
