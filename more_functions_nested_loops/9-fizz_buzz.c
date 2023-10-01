#include "main.h"
#include <stdio.h>

/**
 * main - Entry point for the FizzBuzz program.
 * Description: Prints numbers 1 - 100 followed by new line
 * with multiples of 3 print Fizz instead of number
 * for multiples of 5 will print buzz
 * both 3 and 5 will print FizzBuzz
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 != 0)
{
printf("Fizz");
}
else if (i % 5 == 0 && i % 3 != 0)
{
printf("Buzz");
}
else if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
}
else
{
printf("%d", i);
}

if (i < 100)
{
printf(" ");
}
else
{
printf("\n");
}
}

return (0);
}

