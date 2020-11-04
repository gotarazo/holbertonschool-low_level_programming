#include "lists.h"

/**
* pop_listint- Deletes the head node of a list
* @head: Double pointer to head of list
* Return: hold, data of the head node or 0 (if the linked list is empty)
*/

int pop_listint(listint_t **head)
{
listint_t *aux;
int hold;

if (*head == NULL)
return (0);

aux = *head;
hold = (*head)->n;
*head = (*head)->next;
free(aux);

return (hold);
}
