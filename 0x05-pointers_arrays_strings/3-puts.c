#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 *
 * @str: string to print
 *
 * Return: 0.
 */

void _puts(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		_puts(str[n]);

	}

	_puts('\n');

}
