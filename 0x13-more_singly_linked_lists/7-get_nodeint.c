#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer with the first node.
 * @index: the index of the node.
 *
 * Return: Adress of the node that index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p;
	unsigned int i;

	p = head;
	if (p == '\0')
	{
		return ('\0');
	}
	while (p != '\0')
	{
		if (i == index)
		{
			return (p);
		}
		p = p->next;
		i++;
	}
	return (p);
}
