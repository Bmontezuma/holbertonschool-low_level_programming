#include "main.h"
#include <stdlib.h>
/**
 * create_array - Create an array and initialize it with a specific char.
 * @size: Size of the array.
 * @c: Character for initialization.
 *
 * Return: Pointer to the new array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;

if (size == 0)
{
return (NULL);
}

array = (char *)malloc(size * sizeof(char));

if (array == NULL)
{
return (NULL);
}

for (i = 0; i < size; i++)
{
array[i] = c;
}

return (array);
}

