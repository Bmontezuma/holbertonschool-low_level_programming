#include "main.h"
/**
*print_alphabet - a function that print alphabet
*it prints in lowercase
*Return: no return
*/
void print_alphabet(void)
{
int letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
_iputchar (letter);
}
_putchar (10);
}
