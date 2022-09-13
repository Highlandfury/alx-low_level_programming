#include "main.h"
/**
* print_last_digit -> return absolute value of a number
* @n: parameter
* Return: absolute value of a number
*/
int print_last_digit(int n)
{
int x;
if (n < 0)
n = -n;
x = n % 10;
_putchar(x + '0');
return (x);
}
