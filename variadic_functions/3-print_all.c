#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * pr_int - print integer
 * @val: a va_list struct to process
 */
void pr_int(va_list val)
{
printf("%d", va_arg(val, int));
}
/**
 * pr_char - print a char
 * @val: a va_lis struct to process
 */
void pr_char(va_list val)
{
printf("%c", va_arg(val, int));
}
/**
 * pr_float - prints a double type
 * @val: a va_list struct to process
 */
void pr_float(va_list val)
{
printf("%f", va_arg(val, double));
}

/**
 * pr_str - prints string type
 * @val: a va_list struct to process
 */
void pr_str(va_list val)
{
char *r;
r = va_arg(val, char *);
switch (!r)
{
case 0:
printf("%s", r);
break;
case 1:
printf("(nil)");
break;
}
}

/**
 * print_all - print all arguments that match with format
 * @format: type to print
 * @...: argument to print
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
int i, j;
va_list vls;
p_op ops[] = {
{"c", pr_char},
{"i", pr_int},
{"f", pr_float},
{"s", pr_str},
{NULL, NULL}
};
va_start(vls, format);
i = j = 0;
while (format && format[j])
{
i = 0;
while (ops[i].op)
{
if (ops[i].op[0] == format[j])
{
(ops[i].f)(vls);
if (format[j + 1])
printf(", ");
}
i++;
}
j++;
}
putchar(10);
va_end(vls);
}
