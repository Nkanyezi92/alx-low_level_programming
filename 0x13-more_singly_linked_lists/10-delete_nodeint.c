#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at an index
 * @head: head of the list
 * @index: index 
 * Return: the address of the node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ls = NULL;
	listint_t *ls2 = NULL;
	unsigned int a = 0, b = listint_len(*head);

	if ((index > b) || (b == 0))
		return (-1);
	while (head != NULL)
	{
		if (a == index)
		{
		ls = *head;
			if (a == 0)
			{
				*head = ls->next;
				free(ls);
				return (1);
			}
			ls2->next = ls->next;
			free(ls);
			return (1);
		}
		else if ((a + 1) == index)
			ls2 = *head;
		head = &((*head)->next);
		a++;
	}
	return (-1);
}

/**
 * listint_len - counts the number of nodes 
 * @h: head 
 * Return: elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ls = h;
	size_t size = 0;

	while (ls != NULL)
	{
	size += 1;
	ls = ls->next;
	}
	return (size);
}
