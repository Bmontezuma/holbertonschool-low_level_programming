#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees a dog_t variable
 * @d: Pointer to the dog_t variable to free
 *
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}

