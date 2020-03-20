#include "lists.h"
/**
 * print_list -  prints all the elements of a list_t list.
 * @h: Adress of the head of the linked list to print
 *
 * Return: Unsigned int with the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t i;

	while (h != '\0')
	{
		if (h->str == '\0')
		{
			printf("[%u] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		i++;
		h = h->next;
	}
	return (i);
}
