#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: head of the linked list
 * @n: data in the new node
 *
 * Return: address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == '\0')
	{
		return ('\0');
	}
	new->n = n;
	if (*head != '\0')
	{
		tmp = *head;
		while (tmp->next != '\0')
		{
			tmp = tmp->next;
		}
		new->prev = tmp;
		tmp->next = new;
		new->next = '\0';
	}
	else
	{
		*head = new;
		new->next = '\0';
		new->prev = '\0';
	}
	return (new);
}
