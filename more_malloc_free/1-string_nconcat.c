#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenate two strings, using the first n bytes of s2.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: pointer to the new concatenated string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

unsigned int len1 = 0;
while (s1[len1])
len1++;

unsigned int len2 = 0;
while (s2[len2] && len2 < n)
len2++;

char *concatenated = (char *)malloc(len1 + len2 + 1);
if (concatenated == NULL)
return (NULL);

for (unsigned int i = 0; i < len1 + len2; i++)
concatenated[i] = (i < len1) ? s1[i] : s2[i - len1];

return (concatenated);
}

