#include "lists.h"

/**
 *free_list - Frees a list
 *@head: A pointer
 */

void free_list(list_t *head)
{
	list_t *list;

	while (head)
	{
	list = head->next;
	free(head->str);
	free(head);
	head = list;
	}
}
