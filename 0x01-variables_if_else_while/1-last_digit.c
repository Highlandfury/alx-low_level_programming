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
int n, LastDigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes here */
LastDigit = n % 10;
if (LastDigit > 5)
printf("Last digit of n, and is greater than 5\n");
if (LastDigit == 0)
printf("Last digit of n, and is 0\n");
if (LastDigit < 6 != 0)
printf("Last digit of n, and is less than 6 but not 0\n");
return (0);
}
