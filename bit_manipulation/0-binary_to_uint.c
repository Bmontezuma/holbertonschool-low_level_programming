#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - Converts binary number unsigned int.
 * @b: Pointer to string representing a binary number.
 *
 * Return: The converted number.
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;

if (b == NULL)
return (0);

while (*b)
{
if (*b != '0' && *b != '1')
return (0);
result = result * 2 + (*b++ - '0');
}

return (result);
}

