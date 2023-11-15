#include <stdlib.h>

/**
 * array_iterator -function execute a function
 * @array: array to iterate
 * @size: size of the array
 * @action: the function to execute array and size
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (!array || !size || !action)
return;
while (size--)
action(*array++);
}
