#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabetic character.
 * @c: The character to be checked.
 * Doing something different to help remember.
 * Return: 1 if @c is an alphabetic character, 0 if not.
 * Determins if letter is upper or lower case and then returns value.
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}

	return (0);
}

