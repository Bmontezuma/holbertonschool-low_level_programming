#include "main.h"

/**
 * _strcat - Concatenates the string pointed to by @src to
 *           the end of the string pointed to by @dest.
 * @dest: The destination string where @src will be appended.
 * @src: The source string to be concatenated.
 *
 * Return: A pointer to @dest.
 */
char *_strcat(char *dest, char *src)
{
	while (*dest)
	{
		dest++;
	}

	while ((*dest++ = *src++))
	{
		/* Copy characters from src to dest and increment pointers */
	}

	return (dest - 1);
}

