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
    return;
  
  if (temp->next == NULL)
  {
    head = NULL;
    return;
  }

  while (head !=NULL)
  {
    temp = head;
    head = head->next;
    free(temp);
  }
}