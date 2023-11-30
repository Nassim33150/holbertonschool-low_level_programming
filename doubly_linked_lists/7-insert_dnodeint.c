#include "lists.h"
/**
  * insert_dnodeint_at_index - inserts a node at an index
  * @h: double pointer to a linked list
  * @idx: where to add the node
  * @n: value of the node
  * Return: pointer to the new node
  */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *step = (*h);
	unsigned int pos = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (idx < 1)
	{
		return (add_dnodeint(h, n));
	}


	while (step != NULL)
	{
		if (pos == idx - 1)
		{
			new->prev = step;
			new->next = step->next;
			step->next = new;
			new->next->prev = new;
			return (new);
		}
		pos++;
		step = step->next;
	}
	return (NULL);
}


