#include "dog.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a new string which is a duplicate of the str
 * @str: The string to duplicate.
 *
 * Return: pointer with the address of the array created .
 */
char *_strdup(char *str)
{
	char *p;
	int cont;
	int i;

	if (str == '\0')
		return ('\0');
	cont = 0;
	while (str[cont] != '\0')
	{
		cont++;
	}
	p = malloc((cont * sizeof(char)) + 1);
	if (p == '\0')
		return ('\0');
	for (i = 0; i < cont; i++)
	{
		p[i] = str[i];
	}
	p[i] = '\0';
	return (p);
}
/**
 * new_dog - creates a new dog, pointer to memory
 * @name: dog's name
 * @age: age of the dog
 * @owner: owner's name
 *
 * Description: General information abaout a dog
 * Return: ponter with the new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == '\0')
		return ('\0');
	p->name = _strdup(name);
	if (p->name == '\0')
	{
		free(p);
		return ('\0');
	}
	p->age = age;
	p->owner = _strdup(owner);
	if (p->owner == '\0')
	{
		free(p->name);
		free(p);
		return ('\0');
	}
	return (p);
}
