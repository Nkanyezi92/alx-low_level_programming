#include "lists.h"
/**
*free_listint2 - frees a linked list
*@head: pointer to the head 
*Return: void
*/

void free_listint2(listint_t **head)
{
listint_t *ls;
listint_t **ls2 = head;

if (ls2 != NULL)
{
while (*head != NULL)
{
ls = *head;
free(ls);
*head = (*head)->next;
}

*ls2 = NULL;

}
}
