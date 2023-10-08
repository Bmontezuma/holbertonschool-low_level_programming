#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locates a character in a string.
 * @s: The string to search in.
 * @c: The character to locate.
 * Return: Pointer to the first occurrence of character c in s
 * or NULL if not found.
 */

char *_strchr(char *s, char c)
{
	char *ptr = s;

	while (*ptr)
	{
		if (*ptr == c)
			return (ptr);
		ptr++;
	}

	if (c == '\0')
		return (ptr);

	return (NULL);
}

