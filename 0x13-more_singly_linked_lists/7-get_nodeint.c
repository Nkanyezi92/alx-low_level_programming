#include "lists.h"

/**
*get_nodeint_at_index - return the node of a linked list
*@head: pointer to the head 
*@index: index of the node 
*Return: the address 
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *ls3 = NULL;
unsigned int x = 0;

while (head != NULL)
{
if (x <= index)
{
if (x == index)
{
ls3 =  head;
break;
}
head = head->next;
x++;
}
else
return (NULL);
}
return (ls3);
}
