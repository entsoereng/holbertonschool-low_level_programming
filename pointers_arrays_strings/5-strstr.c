#include "main.h"
#include <stdio.h>

/**
 * _strstr - Function that locates a substring
 * @haystack: The source to search the string
 * @needle: string to search for
 *
 * Return: The beggining of the substring
 */

char *_strstr(char *haystack, char *needle)
{
unsigned int i, z, done;
i = 0;
z = 0;
done = 0;
while (haystack[i] != '\0')
{
if (needle[z] == haystack[i])
{
done = 1;
z++;
}
else
{
done = 0;
z = 0;
}
if (needle[z] == '\0' && done == 1)
return ((haystack + i - z + 1));
else if (needle[z] == '\0' && done == 0)
return (haystack);
i++;
}
return (NULL);
}
