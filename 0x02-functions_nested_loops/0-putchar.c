#include "main.h"
/**
* main - main entery here
* Description: print _putchar
* Return: always zero
*/
int main(void)
{
char *sh = "_putchar";
while (*sh)
{
_putchar(*sh);
sh++;
}
_putchar('\n');
return (0);
}
