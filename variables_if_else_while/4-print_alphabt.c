#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Print alphabet in lowercase followed by newline and print all letters except q and e.
* Return: lowercase alphabet by newline and all letters except q and e.
*/
int main(void)
{
char low, e, q;
e = 'e';
q = 'q';
for (low = 'a'; low <= 'z'; low++)
{
if (low != e && low != q)
putchar(low);
}
putchar('\n');
return (0);
}
