#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t,
 * @head: pointer to pointer to the head
 * Return:  and returns the head node
 */

int pop_listint(listint_t **head)
{
	listint_t *ls;
	int i = 0;
	
	if (head == NULL || *head == NULL)
	return (0);
	ls = *head;
        i = ls->n;
	*head = (*head)->next;
 	free(ls);
	return (i);
}
