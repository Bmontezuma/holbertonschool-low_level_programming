/**
 * _pow_recursion - Calculate x raised to the power of y using recursion.
 * @x: The base number.
 * @y: The exponent.
 *
 * Return: x^y or -1 for negative exponents.
 */
int _pow_recursion(int x, int y)
{
	return ((y < 0) ? -1 : (y == 0) ? 1 : x * _pow_recursion(x, y - 1));
}

