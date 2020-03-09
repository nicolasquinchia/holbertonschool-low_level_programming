#include "dog.h"
#include <stdio.h>
/**
 * print_dog - function that prints a struct dog
 * @d: points to struct of the dog information
 *
 * Description: General information abaout a dog
 */
void print_dog(struct dog *d)
{
	if (d == '\0')
		return;
	if (d->name == '\0')
		printf("Name: (nil)\n");
	if (d->owner == '\0')
		printf("Owner: (nil)\n");
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
