#include <stdio.h>

/**
 * main - Prints numbers from 1 to 100, replacing multiples of 3 with Fizz,
 *        multiples of 5 with Buzz, and multiples of both with FizzBuzz.
 *
 * Return: Always 0.
 */
int main(void)
{
for (int num = 1; num <= 100; num++)
{
if (num % 3 == 0)
printf("Fizz");

if (num % 5 == 0)
printf("Buzz");

if (num % 3 != 0 && num % 5 != 0)
printf("%d", num);

if (num < 100)
printf("\t");
else
printf("\n");
}

return (0);
}

