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
if (98 > 0)
printf("is positive\n");
if (-98 == 0)
printf("is zero\n");
if (0 < 0)
printf("is negative\n");
return (0);
}
