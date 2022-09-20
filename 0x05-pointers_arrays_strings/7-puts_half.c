#include "main.h"
/**
* puts_half - prints half of a string.
* @str: pointer to string.
*
* Return: void.
*/

void uts_half(char *str)
{
	int i, l;

	i = 0;
	while
		(str[i] != '\0')
		{
			i++;
		}
	l = i + 1;

	if (1 % 2 == 0)
	{
		for (i = 1/2; i < l - 1; i++)
		{
			_putchar(str[i]);
		}
	
	}

	else
	{
		for (i = (l -1) / 2; i < l - 1; i++)
		{
			_putchar(str[i]);

		}

	}

	_putchar('\n');

}
