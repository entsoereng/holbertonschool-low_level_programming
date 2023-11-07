#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates array that and fills with a char
 * @size: The size of the array to make
 * @c: character to fill the array with
 *
 * Return: An array of characters
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ar;
if (size <= 0)
return (0);
ar = malloc(size);
if (ar == 0)
return (0);
i = 0;
while (i < size)
{
ar[i] = c;
i++;
}
return (ar);
}
