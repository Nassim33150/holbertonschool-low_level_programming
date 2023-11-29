#include "lists.h"

/**
  * add_node_end - add new nodes at the end of the list
  * _strdup - recreation of string duplicate function
  * @head: current place in the list
  * @str: string to add to the head
  * Return: pointer to adress of the new element
  */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new, *step;

	step = (*head);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[len] != '\0')
	{
		len++;
	}
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if ((*head) == NULL)
	{
		*head = new;
		return (new);
	}
	while (step->next != NULL)
	{
		step = step->next;
	}
	step->next = new;

	return (new);
}
