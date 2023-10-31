#include "main.h"

/**
 * factorial - description
 * @n: number to find factorial
 *
 * Return: Factorial
 */
int factorial(int n)
{
if (n < 0)
return (-1);
else if (n <= 1)
return (1);
return (n * factorial(n - 1));
}
