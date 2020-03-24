#include "lists.h"
/**
 * add_nodeint_end -  adds a new node at the beginning of a list_t list.
 * @head: Pointer with the address of the pointer to the first node
 * @n: integer to add in the node
 *
 * Return: adress of the node created
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p, *temp;

	if (head == '\0')
	{
		return ('\0');
	}
	p = malloc(sizeof(listint_t));
	if (p == '\0')
	{
		return ('\0');
	}
	p->n = n;
	p->next = '\0';
	if (*head == '\0')
	{
		*head = p;
	}
	else
	{
		temp = *head;
		while (temp->next != '\0')
		{
			temp = temp->next;
		}
		temp->next = p;
	}
	return (p);
}
