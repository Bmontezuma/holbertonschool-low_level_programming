#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints every second character of a string
 * @str: The string to be printed
 *
 * Description: This function prints every second character of the
 * provided string, starting with the first character.
 * It then adds a newline character.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
		i++;
	}

	putchar('\n');
}
