#include "lists.h"

/**
 * free_list -> frees a linked list
 * @head: pointer to node head
 * Return: returns nothing
 */

void free_list(list_t *head)
{
	list_t *temp = head;

	if (head == NULL)
	{
		return;
	}
	if (temp->next == NULL)
	{
		free(head);
		return;
	}
	while (head != NULL)
	{
		temp = head;
		if (temp->str == NULL)
			free(temp->str);
		head = head->next;
		free(temp);
	}
}
