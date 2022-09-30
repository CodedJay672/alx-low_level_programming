#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at given pos
 * @h: pointer to head of the dll
 * @idx: index position to add node
 * @n: integer data for the new node
 * Return: returns address of the new pointer or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *last_node = *h;
	unsigned int count = 0;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	while (last_node != NULL)
	{
		if (idx == count)
		{
			if (last_node->next == NULL)
			{
				new_node->next = NULL;
				new_node->prev = last_node;
				last_node->next = new_node;
				return (new_node);
			}
			else if (last_node->prev == NULL)
			{
				new_node->next = last_node;
				new_node->prev = NULL;
				last_node->prev = new_node;
				*h = new_node;
				return (new_node);
			}
			else
			{
				new_node->next = last_node;
				new_node->prev = last_node->prev;
				last_node->prev->next = new_node;
				last_node->prev = new_node;
				return (new_node);
			}
		}
		last_node = last_node->next;
		count++;
	}
	return (NULL);
}
