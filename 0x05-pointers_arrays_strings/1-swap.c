#include "main.h"
#include <stdio.h>
/**
* swap_int - funtion for swaping two pointers
* @a: Pointer to int a
* @b: pointer to int b
* Return: Always zero.
*/

void swap_int(int *a, int *b)
{
int e;
e = *a;
*a = *b;
*b = e;
}
