#include "lists.h"

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head;
		free(head->str);
		head = head->next;
		free(tmp);
	}

}

