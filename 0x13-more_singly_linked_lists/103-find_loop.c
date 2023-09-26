#include "lists.h"

/**
 * find_listint_loop - finds the loop
 * @head: head 
 * Return: the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ls;
	listint_t *lss;

	ls = head;
	lss = head;
	while (head && ls && ls->next)
	{
		head = head->next;
		ls = ls->next->next;

		if (head == ls)
		{
			head = lss;
			lss =  ls;
			while (1)
			{
				ls = lss;
				while (ls->next != head && ls->next != lss)
				{
					ls = ls->next;
				}
				if (ls->next == head)
					break;

				head = head->next;
			}
			return (ls->next);
		}
	}

	return (NULL);
}
