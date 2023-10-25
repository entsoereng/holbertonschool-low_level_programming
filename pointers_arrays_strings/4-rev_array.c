#include "main.h"

/**
* reverse_arrary - description
* @a: The array to reverse
* @n: Number of elements to reverse
* Return: reversed string
*/
void reverse_array(int *a, int n)
{
int temp;
int i;
n--;
for (i = 0; i < n ; i++)
{
temp = a[i];
a[i] = a[n];
a[n] = temp;
n--;
}
}
