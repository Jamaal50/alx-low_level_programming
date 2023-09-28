#include "main.h"

/**
 * _puts_recursion - prints a string
 * @c: c is pointer to char
 * Return:  No return
 */

void _puts_recursion(char *c)
{
if (*c != '\0')
{
_putchar(*c);
_puts_recursion(c + 1);
}
else
{
_putchar('\n');
}
}
