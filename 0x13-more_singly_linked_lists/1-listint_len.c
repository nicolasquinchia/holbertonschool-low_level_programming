#include "lists.h"
/**
 * listint_len -  returns the number of elements in a linked intlist.
 * @h: Adress of the head of the linked list
 *
 * Return: Unsigned int with the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != '\0')
	{
		n++;
		h = h->next;
	}
	return (n);
}
