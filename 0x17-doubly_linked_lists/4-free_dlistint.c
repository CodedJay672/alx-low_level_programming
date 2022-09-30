#include "lists.h"

/**
 * free_dlisint -> frees a doubly linked list
 * @head: pointer to the head of the list
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *last_node = head;
	dlistint_t *temp;

	if (head == NULL)
		return;
	while (last_node->next != NULL)
		last_node = last_node->next;
	temp = last_node;
	while (temp != NULL)
	{
		temp = last_node->prev;
		free(last_node);
	}
}
