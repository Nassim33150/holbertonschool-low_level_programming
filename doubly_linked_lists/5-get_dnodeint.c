#include "lists.h"
/**
  * *get_dnodeint_at_index - gets the node at an index
  * @head: head of the list
  * @index: index to get
  * Return: pointer to the index
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *step = head;

	while (step != NULL)
	{
		if (count == index)
		{
			return (step);
		}
		count++;
		step = step->next;
	}
	return (NULL);
}
