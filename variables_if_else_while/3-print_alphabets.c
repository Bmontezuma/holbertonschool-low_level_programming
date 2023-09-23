#include <stdio.h>
/*
 * Brandon M. Waz here!
 * 3-print_alphabets.c
 */

/**
 * main - prints the alphabet in lowecase and then uppercase and then,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
