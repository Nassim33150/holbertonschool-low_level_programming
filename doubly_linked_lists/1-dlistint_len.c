#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
  * dlist_len - finds the number of nodes in a list
  * @h: doubly linked list
  * Return: number of elements in a linked list
  */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
