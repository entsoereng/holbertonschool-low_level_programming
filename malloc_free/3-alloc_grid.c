#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - Function that returns a pointer to 2 dimentional
 * array fo integers.
 * @width: columns
 * @height: rows
 *
 * Return: Pointer to 2 dimentional array
 */
int **alloc_grid(int width, int height)
{
int **arr;
int r, c, i;
if (width <= 0 || height <= 0)
return (NULL);
arr = (int **)malloc(sizeof(*arr) * height);
if (arr == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
arr[i] = (int *)malloc(sizeof(int) * width);
if (arr[i] == NULL)
{
while (i--)
free(arr[i]);
free(arr);
return (NULL);
}
}
for (r = 0; r < height; r++)
for (c = 0; c < width; c++)
arr[r][c] = 0;
return (arr);
}
