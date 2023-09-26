#include "lists.h"

/**
 *add_nodeint_end - adds a node to the end 
 *@head: head of the list
 *@n: number to be used 
 *Return: address
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *x;
	listint_t *y = *head;

	x = malloc(sizeof(listint_t));
	if (x != NULL)
	{
	x->n = n;
	x->next = NULL;
	}
	else
	return (NULL);
	if (y != NULL)
	{
	while (y->next != NULL)
	y = y->next;

	y->next = x;
	}
	else
	*head = x;
	return (x);
}
