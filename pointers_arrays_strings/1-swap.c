#include "main.h"

/**
 * swap_int - Take in two variable integer and swap them
 * @author: emmanuel
 * @a: Swaps and store address of b
 * @b: Swaps abd store address of a
 * Return 0
 */

void swap_int(int* a, int* b)
{
int change;
change = *b;
*b = *a;
*a = change;
}
