#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to head of linked list
 * Return: all the elements 
 */

size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
	printf("%d\n", h->n);
	h = h->next;
	size++;
	}
	return (size);
}
