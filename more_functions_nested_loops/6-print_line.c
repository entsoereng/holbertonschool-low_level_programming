#include "main.h"

/**
 * print_line - Function that prints a straight line
 * @n: length of the line
 *
 */
void print_line(int n)
{
while (!(n <= 0))
{
_putchar('_');
n--;
}
_putchar('\n');
}
