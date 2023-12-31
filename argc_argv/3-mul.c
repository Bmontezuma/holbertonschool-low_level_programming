#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers and prints the result.
 * @argc: Number of arguments (should be 3).
 * @argv: Array of arguments (program name, number1, and number2).
 * Return: 0 if successful, 1 if there are not enough arguments.
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}

