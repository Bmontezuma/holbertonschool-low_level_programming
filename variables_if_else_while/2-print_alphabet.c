/*
 * 2-print_alphabet.c
 * Brandon M. waz here
 */

#include 'main.h'
/**
 * Write program that will print the alphabet in lowercase
 * it will print in lowercase and a new line following
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');

}
