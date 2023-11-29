#include "lists.h"
/**
  * sum_dlistint - sums all nodes in a linked list
  * @head: head of the list
  * Return: the sum of the nodes
  */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *step = head;

	while (step != NULL)
	{
		sum += step->n;
		step = step->next;
	}
	return (sum);
}
