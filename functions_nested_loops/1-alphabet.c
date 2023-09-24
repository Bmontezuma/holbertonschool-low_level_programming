#include "main.h"

/**
 * print_alphabet - Will print the lowercase alphabet.
 * I had to rewrite this ten times BETTY!
 * This function will print the lowercase alphabet from 'a' to 'z',
 * followed by a newline character.
 */
void print_alphabet(void)

{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}















