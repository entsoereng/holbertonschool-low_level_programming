#include "main.h"

/**
 * print_numbers - Function that prints the number from 0 to 9
 *
 */
void print_numbers(void)
{
int num = 0;
while (num < 10)
{
_putchar('0' + num);
num++;
}
_putchar('\n');
}
