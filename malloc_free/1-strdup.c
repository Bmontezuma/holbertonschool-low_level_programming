#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string, or NULL on failure.
 */
char *_strdup(char *str)
{
char *duplicate;

if (str == NULL)
return (NULL);

duplicate = malloc(strlen(str) + 1);

if (duplicate == NULL)
return (NULL);

strcpy(duplicate, str);

return (duplicate);
}

