#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change
 * @argc: size of argv
 * @argv: array of size argc
 * Return: 0 success and 1 failure
 */
int main(int argc, char *argv[])
{
int sum, count;
unsigned int x;
char *y;
int cents[] = {25, 10, 5, 2};

if (argc != 2)
{
printf("Error\n");
return (1);
}
sum = strtol(argv[1], &y, 10);
count = 0;

if (!*y)
{
while (sum > 1)
{
for (x = 0; x < sizeof(cents[x]); x++)
{
if (sum >= cents[x])
{
count += sum / cents[x];
sum = sum % cents[x];
}
}
}
if (sum == 1)
count++;
}
else
{
printf("Error\n");
return (1);
}
printf("%d\n", count);
return (0);
}
