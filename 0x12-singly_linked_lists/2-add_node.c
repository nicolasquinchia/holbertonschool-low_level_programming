#include "lists.h"
/**
 * add_node -  adds a new node at the beginning of a list_t list.
 * @head: Pointer with the address of the pointer to the first node
 * @str: Pointer with the address of the string
 *
 * Return: adress of the node created
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *p;
	unsigned int n;

	p = malloc(sizeof(list_t));
	if (p == '\0')
	{
		return ('\0');
	}
	p->str = strdup(str);
	if (p->str == '\0')
	{
		free(p);
		return ('\0');
	}
	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	p->len = n;
	p->next = *head;
	*head = p;
	return (p);
}
