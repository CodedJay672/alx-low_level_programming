#include "lists.h"

/**
 * insert_nodeint_at_index -> funct that inserts a node at
 * a given position (idx)
 * @head: pointer to the head node
 * @idx: index position to add the new node
 * @n: integer data for the new node
 * Return: returns the address for the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *temp;
	unsigned int count = 1;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	new_node->n = n;
	if (new_node == NULL)
	{
		free((*head));
		return (NULL);
	}
	temp = (*head);
	while (count < idx)
	{
		if (temp->next != NULL)
		{
			temp = temp->next;
		}
		else
		{
			return (NULL);
		}
		count++;
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
