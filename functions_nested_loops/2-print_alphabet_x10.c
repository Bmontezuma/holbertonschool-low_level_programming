#include "main.h"

/**
 * print_alphabet_x10 - Will print the alphabet ten times, in lowercase
 * Destiny still arrives. Or should I say, I have - THANOS
 */


	void print_alphabet_x10(void)
{
	int count = 0;
	char letter;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
