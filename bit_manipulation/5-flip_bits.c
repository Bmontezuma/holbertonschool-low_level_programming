#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to flip
 * @n: The first number
 * @m: The second number
 *
 * Return: The number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int count = 0;
unsigned long int bit_diff = n & m;

while (bit_diff != 0)
{
count += bit_diff & 1;
bit_diff >>= 1;
}

return (count);
}

