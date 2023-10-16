#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Prints alphabetes in lower case and in upper case.
* Return: Upper case or Lower case.
*/
int main(void)
{
char low;
for (low = 'a'; low <= 'z'; low++)
putchar(low);
for (low = 'A'; low <= 'Z'; low++)
putchar(low);
putchar('\n');
return (0);
}
