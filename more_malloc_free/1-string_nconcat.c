#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenate two strings with a limit.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes to concatenate from s2.
 *
 * Return: A pointer to the new concatenated string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	unsigned int s1_len = strlen(s1);
	unsigned int s2_len = strlen(s2);
	unsigned int length = s1_len + ((n < s2_len) ? n : s2_len);

	char *result = (char *)malloc(length + 1);

	if (result == NULL)
		return (NULL);

	strcpy(result, s1);
	strncat(result, s2, (n < s2_len) ? n : s2_len);

	return (result);
}

