#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list
 *@head: pointer 
 *@str: string 
 *Return: NULL or address
*/

list_t *add_node_end(list_t **head, const char *str)
{
	char *c;
	int i;
	list_t *a, *b;

	a = malloc(sizeof(list_t));
	if (a == NULL)
		return (NULL);

	c = strdup(str);
	if (str == NULL)
	{
	free(a);
	return (NULL);
	}

	for (i = 0; str[i];)
	i++;

	a->str = c;
	a->len = i;
	a->next = NULL;

	if (*head == NULL)
	*head = a;
	else
	{
		b = *head;
		while (b->next != NULL)
			b = b->next;
		b->next = a;
	}
	return (*head);
}
