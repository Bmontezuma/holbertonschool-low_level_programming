#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Locates the first occurrence of any byte in accept.
 * @s: The string to search in.
 * @accept: The characters to search for.
 *
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}

		s++;
	}

	return (NULL);
}

