#include <stdio.h>
#include <stdlib.h>

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
		char *arg = argv[i];
		int j = 0;

		while (arg[j])
		{
			if (arg[j] < '0' || arg[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}

		sum += atoi(arg);
	}

	printf("%d\n", sum);
	return (0);
}

