#include "main.h"
/**
* _memset - fills memory with a constant byte.
* @s: A char pointer
* @b: The byte to be used to fill s
* @n: The size of memory area of s to be filled
*
* Return: pointer
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
