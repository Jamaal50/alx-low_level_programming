#include <stdio.h>

/**
 * main - prints out all the alphabet in
 * lowercase and upper case.
 * * Return: Always 0 (Success)
 */
int main(void)
{
int l, u;

/* l is being initialized to the ASCII */
/* value of 'a'. Taking advantage of the */
/* initialization, we could print out all */
/* the alphabets up until 'z' */
for (l = 'a'; l <= 'z'; l++)
putchar(l);

for (u = 'A'; u <= 'Z'; u++)
putchar(u);

putchar ('\n');
return (0);
}
