#include "lists.h"
/**
 * add_dnodeint -  adds a new node at the beginning of a dlistint_t list.
 * @head: head of the linked list
 * @n: data in the new node
 *
 * Return:  address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == '\0')
	{
		return ('\0');
	}
	new->n = n;
	new->prev = '\0';
	new->next = *head;
	if (*head != '\0')
	{
		(*head)->prev = new;
	}
	*head = new;
	return (new);
}
