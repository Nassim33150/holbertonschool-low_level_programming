#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
  * free_dlistint - frees a linked list
  * @head: the beginning of the list
  */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
