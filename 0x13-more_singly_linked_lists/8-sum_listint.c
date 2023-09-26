#include "lists.h"

/**
 *sum_listint - sums up all the data 
 *@head: head of the list
 *Return: sum of the number
 */

int sum_listint(listint_t *head)
{
listint_t *ls = head;
size_t size = 0;

while (ls != NULL)
{
size += ls->n;
ls = ls->next;
}
return (size);
}
