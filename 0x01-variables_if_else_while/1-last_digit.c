#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - function main
 * Return: Zero
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

/* print the randomly generated number */
printf("Last digit of %d is ", n);

/* get the last digit of n */
int lastDigit = abs(n) % 10;

/* check whether the last digit is greater than 5, less than 6 and not 0, or 0 */
if (lastDigit > 5)
{
printf("%d and is greater than 5\n", lastDigit);
}
else if (lastDigit < 6 && lastDigit != 0)
{
printf("%d and is less than 6 and not 0\n", lastDigit);
}
else
{
printf("%d and is 0\n", lastDigit);
}

return 0;
}


