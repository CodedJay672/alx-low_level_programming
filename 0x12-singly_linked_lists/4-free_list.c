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
		free(temp);
		return;
	}

	while (head != NULL)
	{
		if (head->str == NULL)
			free(head->str);
		temp = head;
		head = head->next;
		free(temp);
	}
}
