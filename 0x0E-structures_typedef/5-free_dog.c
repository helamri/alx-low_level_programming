#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - function that frees dogs.
 * @d: pointer type.
 *
 * Description: free dogs.
 * Return: void function.
 */

void free_dog(dog_t *d)
{
if (d)
{
free(d->owner);
free(d->name);
free(d);
}
}