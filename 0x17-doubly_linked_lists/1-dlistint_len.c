#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a d linked list
 * @h: head of the linked list
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n_nodes = 0;

	if (h == '\0')
	{
		return (0);
	}
	while (h != '\0')
	{
		h = h->next;
		n_nodes++;
	}
	return (n_nodes);
}
