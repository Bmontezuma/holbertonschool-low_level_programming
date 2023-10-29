#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Creates a new dog
 * @name: Pointer to the name string
 * @age: Age of the dog
 * @owner: Pointer to the owner string
 *
 * Return: Pointer to the new dog, or NULL if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog = malloc(sizeof(dog_t));
if (new_dog != NULL)
{
char *new_name = malloc(strlen(name) + 1);
char *new_owner = malloc(strlen(owner) + 1);
if (new_name != NULL && new_owner != NULL)
{
strcpy(new_name, name);
strcpy(new_owner, owner);
new_dog->name = new_name;
new_dog->age = age;
new_dog->owner = new_owner;
}
else
{
free(new_name);
free(new_owner);
free(new_dog);
new_dog = NULL;
}
}
return (new_dog);
}

