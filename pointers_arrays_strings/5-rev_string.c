#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverses a string in place.
 *
 * @s: Pointer to the string to be reversed.
 */
void rev_string(char *s)
{
int a, len;
char *begin, *end = s;

for (a = 0; s[a] != '\0' && s[a + 1] != '\0'; a++)
{
end++;
}
len = a + 1;

begin = s;

for (a = 0; a < len / 2; a++)
{
char x;
x = *end;
*end = *begin;
*begin = x;
begin++;
end--;
}

end[1] = '\0';
}

