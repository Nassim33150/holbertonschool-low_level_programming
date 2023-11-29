#include "lists.h"
/**
  * add_dnodeint - add new nodes to the list
  * @n: value to add to the list
  * @head: current place in the list
  * Return: pointer to current position in list
  */


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;

	return (new);
}
