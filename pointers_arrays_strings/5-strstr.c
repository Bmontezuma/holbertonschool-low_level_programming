#include "main.h"
#include <stdio.h>

/**
 * _strstr - Locates the first occurrence of a substring.
 * @haystack: The string to search in.
 * @needle: The substring to search for.
 *
 * Return: A pointer to the beginning of the located substring, or NULL if
 * the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack, *n = needle;

		while (*n && *h == *n)
			h++, n++;

		if (!*n)
			return (haystack);

		haystack++;
	}

	return (NULL);
}


