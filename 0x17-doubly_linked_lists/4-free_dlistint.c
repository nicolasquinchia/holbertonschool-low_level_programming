#include "lists.h"
/**
 * free_dlistint - Frees a double linked list
 * @head: Address of the head of the linked list
 *
 * Return: Free list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp_1, *tmp_2;

	if (head == '\0')
	{
		return;
	}
	tmp_1 = head->next;
	while (tmp_1 != '\0')
	{
		tmp_2 = tmp_1->next;
		free(tmp_1);
		tmp_1 = tmp_2;
	}
	free(head);
}
