#include "main.h"

/**
 * puts2 - Prints every first character of string
 * @str: The used string reference
 * Return 0
 */

void puts2(char *str)
{
int z = 0;
while (str[z] != '\n')
{
if (z % 2 == 0)
_putchar(str[z]);
{
z++;
}
_putchar('\n');
}
}
