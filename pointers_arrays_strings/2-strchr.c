#include "main.h"
#include <stddef.h>
/**
 * _strchr - Locates a character in a string
 * @s: Pointer to the string to search
 * @c: The character to find
 *
 * Return: Pointer to the first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	/* Iterate through the string until we find the character or reach the end */
	while (*s != '\0')
	{
		if (*s == c)
			return (s); /* Return a pointer to the first occurrence of c */
		s++;
	}

	/* If the character is not found, return NULL */
	return (NULL);
}

