#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to pointer to the head 
 * Return:  pointer to first node.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ls;
	listint_t *ls2;

	ls = NULL;
	ls2 = NULL;

	while (*head != NULL)
	{
		ls2 = (*head)->next;
		(*head)->next = ls;
		ls = *head;
		*head = ls2;
	}

	*head = ls;
	return (*head);
}
