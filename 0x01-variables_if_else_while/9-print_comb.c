#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 * Return: Always 0.
 */
int main(void)
{
int digit;

for (digit = 0; digit < 10; digit++)
{
putchar(digit + '0');

/* If not the last digit, print comma and space */
if (digit != 9)
{
putchar(',');
putchar(' ');
}
}

putchar('\n');

return (0);
}

