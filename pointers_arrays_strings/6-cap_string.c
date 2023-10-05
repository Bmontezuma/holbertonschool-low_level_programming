#include "main.h"

/**
 * cap_string - Capitalize all words in a string.
 * @str: The string to modify.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	char *ptr = str;
	int cap_next = 1;

	while (*ptr)
	{
		if (cap_next && (*ptr >= 'a' && *ptr <= 'z'))
		{
			*ptr -= 32;
			cap_next = 0;
		}

		if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' ||
		    *ptr == ',' || *ptr == ';' || *ptr == '.' ||
		    *ptr == '!' || *ptr == '?' || *ptr == '"' ||
		    *ptr == '(' || *ptr == ')' || *ptr == '{' ||
		    *ptr == '}')
		{
			cap_next = 1;
		}

		ptr++;
	}

	return (str);
}

