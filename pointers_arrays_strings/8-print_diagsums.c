#include "main.h"
#include <stdio.h>

/**
* print_diagsums - Function that prints sum of diagonals of a square
* matrix integer
* @a: matrix integer
* @size: The size of the array
* Return: nothing
*/

void print_diagsums(int *a, int size)
{
int sum1, sum2;
int row, col;
sum1 = 0;
sum2 = 0;
row = 0;
col = 0;
while (row < size)
{
sum1 += (*a + row*size + col);
sum2 += (*a + row*size + (size - 1 - col));
col++;
row++;
}
printf("%d, %d\n", sum1, sum2);
}
