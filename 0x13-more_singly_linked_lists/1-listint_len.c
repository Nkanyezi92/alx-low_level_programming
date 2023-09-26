#include "lists.h"
/**
 *listint_len - Returns the number of elements
 *@h: pointer to head of the list
 *Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
	x++;
	h = h->next;
	}
	return (x);
}
