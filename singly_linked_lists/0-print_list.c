#include <stdio.h>
#include "lists.h"
/**
  * print_listint - prints all elements of a list_t list
  * @h: singly linked list to print
  * Return: number of nodes in the list
  */

size_t print_list(const list_t *h)
{
	size_t count = 0; 
	
	if (h->str == NULL)
		printf("[0] (nil)");

	while (h != NULL)
	{
		printf("[%u] %s\n", h->len, h->str);
		count ++;
		h = h->next;
	}
	return (count);
}
