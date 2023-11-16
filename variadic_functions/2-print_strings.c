#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_string - print given string
 * @separator: separator to print
 * @n: number of arguments
 * @...: string to print
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list vls;
unsigned int i;
char *r;

va_start(vls, n);
i = 0;
while (i < n)
{
r = va_arg(vls, char*);
if (!r)
printf("(nil)");
else
printf("%s", r);
i++;
if (i < n && separator)
printf("%s", separator);
}
putchar(10);
va_end(vls);
}

