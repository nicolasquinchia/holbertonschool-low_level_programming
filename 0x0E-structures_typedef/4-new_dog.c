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
	int i;
	int a;
	char *m;

	if (str == '\0')
	{
		return ('\0');
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	m = malloc((i * sizeof(char)) + 1);
	if (m == '\0')
	{
		return ('\0');
	}
	for (a = 0; a <= i; a++)
	{
		m[a] = str[a];
	}
	return (m);
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
	}
	return ('\0');
}
