#include "main.h"
#include <string.h>
#include <stdio.h>
/**
*
*
*
*/
int _strlen(char *s)
{
char str [50];
int length;
strcpy(str, "Welcome to arrays and pointers"); 
length = strlen(str);
printf("legnt of %s is %d", str, length);
return (0);
}
