#include "lists.h"

/**
 * free_listint2 -> frees a singly linked list
 * @head: pointer to head node
 * Return: returns nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp = (*head);

	if (head == NULL)
	{
		free(*head);
		return;
	}

	while (temp != NULL)
	{
		temp = temp->next;
		free(*head);
		(*head) = temp;
	}
}
