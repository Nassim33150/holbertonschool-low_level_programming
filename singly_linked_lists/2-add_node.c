#include "lists.h"
/**
  * add_node - add new nodes to the list
  * @head: current place in the list
  * @str: string to add to the head
  * Return: pointer to current position in list
  */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[len] != '\0')
	{
		len++;
	}
	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	*head = new;

	return (new);
}

