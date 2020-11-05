#include "lists.h"

/**
* delete_nodeint_at_index- Deletes the node at index of a list
* @head: Pointer to the address of the head of the list
* @index: Index of the node that should be deleted
* Return: 1 (if it succeeded) or -1 (if it failed)
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *aux1 = *head, *aux2;
unsigned int node;

if (!aux1)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(aux1);
return (1);
}
for (node = 0; node < (index - 1); node++)
{
if (aux1->next == NULL)
return (-1);
aux1 = aux1->next;
}
aux2 = aux1->next;
aux1->next = aux2->next;
free(aux2);
return (1);
}
