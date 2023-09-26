#include "lists.h"

/**
 *add_nodeint - Adds a new node at the beginning
 *@head: A pointer to the address 
 *@n: the integer 
 *Return: ...
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *lst;

	lst = malloc(sizeof(listint_t));
	if (lst == NULL)
	return (NULL);

	lst->n = n;
	lst->next = *head;

	*head = lst;

	return (lst);
}
