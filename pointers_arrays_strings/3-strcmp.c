#include "main.h"

/**
 * _strcmp - Compare two strings.
 * @s1: First string to compare.
 * @s2: Second string to compare.
 *
 * Return: 0 if equal, negative if s1 < s2, positive if s1 > s2.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}

