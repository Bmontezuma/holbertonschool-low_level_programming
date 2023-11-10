#include <stdio.h>

/**
 * binary_to_uint - Will convert binary number to unsigned int.
 * @b: pointer to string of chars
 *
 * Return: converted number
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

int main(void)
{
const char *binary_string = "1101";
unsigned int result = binary_to_uint(binary_string);

printf("Binary: %s\nUnsigned Int: %u\n", binary_string, result);

return (0);
}
