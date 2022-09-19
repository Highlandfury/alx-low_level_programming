#include "main.h"
#include <stdio.h>
/**
* reset_to_98 - n reset pointer
* Description: is not empty
* @n: pointer to the variable to update
* Return: always zero
*/
void reset_to_98(int *n);
int main(void)
{
int n = 42;
int *p = &n;
*p = 98;
}
