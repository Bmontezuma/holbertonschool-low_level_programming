#include "main.h"
#include "stdio.h"

/**
 * more_numbers - prints numbers from 0 to 14, ten times.
 *
 * Description: This function prints numbers from 0 to 14, ten times,
 * separated by newlines.
 */
void more_numbers(void)
{
int number1, number2;

for (number1 = 0; number1 < 10; number1++)
{
for (number2 = 0; number2 <= 14; number2++)
{
if (number2 > 9)
{
putchar((number2 / 10) + '0');
}
putchar((number2 % 10) + '0');
}
putchar(10);
}
}

