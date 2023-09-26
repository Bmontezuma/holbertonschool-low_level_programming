#include "main.h"

/**
 * _abs - Calculate the absolute value of a number.
 * @i: The number for which to find the absolute value.
 *
 * This function takes an integer 'i' as input and computes its absolute value.
 * If 'i' is greater than 0, it returns 'i'. If 'i' is less than 0, it returns
 * the positive counterpart of 'i'. If 'i' is already 0, it returns 0 since the
 * absolute value of 0 is also 0.
 *
 * @param i: The integer whose absolute value is to be determined.
 *
 * Return: The absolute value of the integer 'i'.
 */
int _abs(int i)
{
    if (i > 0)
    {
        return i; 
    }
    else if (i < 0)
    {
        return -i; 
    }
    else
    {
        return 0; 
    }
}

