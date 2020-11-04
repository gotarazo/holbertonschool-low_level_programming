#include "lists.h"

/**
* free_listint- Frees a list
* @head: Head of list
* Return: void
*/

void free_listint(listint_t *head)
{
while (head)
{
free(head);
head = head->next;
}
}
