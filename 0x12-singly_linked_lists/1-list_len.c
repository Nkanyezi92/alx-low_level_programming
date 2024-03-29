#include "lists.h"

/**
 * list_len - finds the number of elements in a linked list
 *@h: pointer 
 *
 *Return: nr of elements
*/

size_t list_len(const list_t *h)
	{
		size_t x = 0;

		while (h)
		{
		x++;
		h = h->next;
		}

	return (x);
	}
