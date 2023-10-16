#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - Print base 16 numbers in lowercase
* Return: base 16 numbers in lowercase.
*/
int main(void)
{
int num;
char l;
for(num = '0'; num <= '9'; num++)
putchar(num);
for(l = 'a'; l <= 'z'; l++)
putchar(l);
putchar('\n');
return (0);
}
