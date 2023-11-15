#include "main.h"

/**
 * print_name - prints name
 * @name: string to print
 * @f: function to use
 *
 */
void print_name(char *name, void (*f)(char *))
{
if (!f || !name)
return;
f(name);
}
