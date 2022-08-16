#include "lists.h"

/**
 * get_nodeint_at_index -> gets the nth node of a list
 * @head: pointer to the head node
 * @index: index of node to return
 * Return: returns pointer of nth node at index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int count = 1;

	if (head == NULL)
		return (NULL);
	node = head;
	while (head->next != NULL)
	{
		node = head->next;
		head = node;
		if (count == index)
			return (head);
		count++;
	}

	return (NULL);
}
