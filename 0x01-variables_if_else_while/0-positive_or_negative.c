#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more header goes there */
/* betty style doc for function main goes there */
/**
* main - Entry
* Description: Nothing
* Return: zero
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes here */
if (n > 0)
printf("98 is positive\n");
if (n == 0)
printf("0 is zero\n");
if (n < 0)
printf("-98 is negative\n");
return (0);
}
