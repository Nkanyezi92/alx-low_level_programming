#include "lists.h"

/**
 * insert_nodeint_at_index - ...
 * @head: head of the list
 * @idx: index of the node 
 * @n: ...
 * Return: the address
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ls = NULL;
	listint_t *ls1 = NULL;
	unsigned int x = 0;

	ls = malloc(sizeof(listint_t));
	if (ls == NULL || idx > listint_len(*head))
	{
	free(ls);
	return (NULL);
	}
	ls->n = n;
	ls->next = NULL;
	while (head != NULL)
	{
	if (x == idx)
	{
	if (x == 0)
			{
	ls->next = *head;
	*head = ls;
	return (ls);
			}
	ls->next = ls1->next;
	ls1->next = ls;
	return (ls);
		}
	else if ((x + 1) == idx)
	ls1 = *head;
	head = &((*head)->next);
	x++;
	}
	return (NULL);
}

/**
 * listint_len - counts the number of nodes 
 * @h: head 
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ls2 = h;
	size_t size = 0;

	while (ls2 != NULL)
	{
	ls2 += 1;
	ls2 = ls2->next;
	}
	return (size);
}
