#include "lists.h"
/**
 * print_dlistint -  prints all the elements of a double linked list
 * @h: head of the linked list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n_nodes = 0;

	if (h == '\0')
	{
		return (0);
	}
	while (h != '\0')
	{
		printf("%d\n", h->n);
		h = h->next;
		n_nodes++;
	}
	return (n_nodes);
}
