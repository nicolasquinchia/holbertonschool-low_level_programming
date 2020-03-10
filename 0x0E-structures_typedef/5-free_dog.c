#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - clean the memory space frees dogs
 * @d: The pointer with the adress of the struct dogs.
 *
 * Return: void function, just free the memory allocated by dog..
 */
void free_dog(dog_t *d)
{
	if (d == '\0')
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
