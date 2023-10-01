#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length of the string
 */
int _strlen(char *s);

/**
 * print_rev - prints a string in reverse
 * @s: string to print
 */
void print_rev(char *s)
{
    int len = _strlen(s);

    for (int index = len - 1; index >= 0; index--)
        putchar(s[index]);

    putchar('\n');
}

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length of the string
 */
int _strlen(char *s)
{
    int count = 0;

    while (s[count])
        count++;

    return (count);
}

int main(void)
{
    // Your main function code here
    return (0);
}

