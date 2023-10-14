#include <stdio.h>
#include <stdlib.h>

/**
 * is_positive_number - Check if a string is a positive number.
 * @str: The string to check.
 * Return: 1 if it's a positive number, 0 otherwise.
 */
int is_positive_number(char *str)
{
	if (str == NULL || *str == '\0')
	{
		return (0);
	}

	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str++;
	}

	return (1);
}

/**
 * main - Add positive numbers.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 * Return: 0 if successful, 1 for errors.
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (int i = 1; i < argc; i++)
	{
		if (is_positive_number(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);
	return (0);
}

