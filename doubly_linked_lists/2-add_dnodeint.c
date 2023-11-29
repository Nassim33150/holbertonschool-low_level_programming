#include "lists.h"
/**
  * add_dnodeint - add new nodes to the list
  * @n: value to add to the list
  * @head: current place in the list
  * Return: pointer to current position in list
  */


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp;

	tmp = *head;
	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return (NULL);

	tmp->n = n;
	tmp->prev = NULL;
	tmp->next = *head;
	if ((*head) != NULL)
	{
		(*head)->prev = tmp;
	}
	*head = tmp;

	return (tmp);
}
