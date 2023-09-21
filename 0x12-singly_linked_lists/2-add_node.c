#include "lists.h"

/**
 * add_node - adds a new node at the beginning of list.
 * @head: pointe
 * @str: pointer 
 * Return: The address of the new element or NULL if it failed.
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ls;
	size_t s = 0;

	ls = malloc(sizeof(list_t));
	if (ls == NULL)
		return (NULL);
	while (str[s])
	s++;
	ls->len = s;
	ls->str = strdup(str);
	ls->next = *head;
	*head = ls;
	return (ls);
}
