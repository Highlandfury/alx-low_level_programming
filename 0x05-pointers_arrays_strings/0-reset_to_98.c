#include "main.h"
#include <stdio.h>
/**
* reset_to_98 - n reset pointer
* Description:main
* Return: always zero
*/
void reset_to_98(int *n);
int main(void)
{
int n = 42;
int *p = &n;
*p = 98;
return (0);
}
