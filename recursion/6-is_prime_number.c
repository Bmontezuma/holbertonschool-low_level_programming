#include <stdio.h>

/**
 * is_prime_helper - A helper function that recursively checks if a number is prime.
 * @n: The number to be checked for primality.
 * @divisor: The current divisor being tested.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_helper(int n, int divisor)
{
    if (n <= 1) {
        return (0);
    }
    if (divisor == 1) {
        return (1);
    }
    
    if (n % divisor == 0) {
        return (0);
    }
    
    return is_prime_helper(n, divisor - 1);
}

/**
 * is_prime_number - Check if an input integer is a prime number.
 * @n: The integer to be checked.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
    if (n < 2) {
        return (0);
    }
    
    return is_prime_helper(n, n - 1);
}

int main(void)
{
    int r;

    r = is_prime_number(1);
    printf("%d\n", r);
    r = is_prime_number(1024);
    printf("%d\n", r);
    r = is_prime_number(16);
    printf("%d\n", r);
    r = is_prime_number(17);
    printf("%d\n", r);
    r = is_prime_number(25);
    printf("%d\n", r);
    r = is_prime_number(-1);
    printf("%d\n", r);
    r = is_prime_number(113);
    printf("%d\n", r);
    r = is_prime_number(7919);
    printf("%d\n", r);
    return (0);
}

