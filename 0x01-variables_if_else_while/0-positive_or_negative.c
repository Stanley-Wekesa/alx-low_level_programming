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
printf("%d", n);

/* check whether the number is positive, negative, or zero */
if (n > 0)
{
printf("is positive\n");
}
else if (n < 0)
{
printf("is negative\n");
}
else
{
printf("is zero\n");
}

return (0);
}


