#include "main.h"

/**
 * print_rev - prints a string, in reverse, 
 *
 * @s: string to reverse
 *
 *
 * Return: Always zero.
 */

void print_rev(char *s)
{
	int n, p;

	n = 0;

	while
		(s[n] != '\0')
		{
			n++;
		}
	p = n - 1;

	for (n = p; n >= 0; n--)
	{
		_putchar(s[n]);
	}

	_putchar('\n');
}
