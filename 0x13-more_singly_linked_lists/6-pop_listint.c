#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer with the head, first node adress
 *
 * Return: head nodes data.
 */
int pop_listint(listint_t **head)
{
	listint_t *p, *temp_head;
	int n;

	if (head == '\0')
	{
		return (0);
	}
	temp_head = *head;
	p = *head;
	p = p->next;
	*head = p;
	n = temp_head->n;
	free(temp_head);
	return (n);
}
