#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all argumnets of my program
 * @ac: argumnet count
 * @av: argument of size ac
 * Return: double point to a new string. Or NULL otherwise
 */
char *argstostr(int ac, char **av)
{
char *p, *retp;
int a, b, total;

if (ac == 0 || av == NULL)
return (NULL);

for (a = 0, total = 0; a < ac; a++)
{
for (b = 0; *(*(av + a) + b)  != '\0'; b++, total++)
;
total++;
}
total++;

p = malloc(total *sizeof(char));
if (p == NULL)
return (NULL);
retp = p;
for (a = 0; a < ac; a++)
{
for (b = 0; av[a][b] != '\0'; b++)
{
*p = av[a][b];
p++;
}
*p = '\n';
p++;
}
return (retp);
}

