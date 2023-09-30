i#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Return: The integer representation of the string.
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	while (s[i] == ' ')
	{
		i++;
	}

	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (result * sign);
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	char str[] = "-123abc456";
	int num = _atoi(str);

	char output[12];
	int n = num;
	int i = 0;

	if (n < 0)
	{
		output[i++] = '-';
		n = -n;
	}

	char temp;
	while (n > 0)
	{
		temp = '0' + (n % 10);
		output[i++] = temp;
		n /= 10;
	}

	output[i] = '\0';

	int start = 0;
	int end = i - 1;

	while (start < end)
	{
		temp = output[start];
		output[start] = output[end];
		output[end] = temp;
		start++;
		end--;
	}

	write(1, output, i);

	return (0);
}

