#include <stdlib.h>

/**
 * string_nconcat - Concatenate two strings using the first n bytes of s2.
 * @s1: The first string.
 * @s2: The second string.
 * @n: Maximum bytes from s2 to concatenate.
 *
 * Return: Pointer to the concatenated string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = 0, len2 = 0;
char *concatenated;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[len1])
{
len1++;
}
while (s2[len2] && len2 < n)
{
len2++;
}

concatenated = (char *)malloc(len1 + len2 + 1);
if (concatenated == NULL)
{
return (NULL);
}

unsigned int i;
for (i = 0; i < len

