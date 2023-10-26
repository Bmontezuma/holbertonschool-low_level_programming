#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Apply a function to each element of an array.
 * @array: The array to be processed.
 * @size: The size of the array.
 * @action: The function to be executed on each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array != NULL && action != NULL && size > 0)
{
for (size_t i = 0; i < size; i++)
{
action(array[i]);
}
}
}

