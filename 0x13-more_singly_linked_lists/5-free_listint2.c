#include "lists.h"

/**
* free_listint2- Frees a list and sets head to NULL
* @head: Double pointer to head of list
* Return: void
*/

void free_listint2(listint_t **head)
{
if (head == NULL)
return;

while (*head)
{
free(*head);
*head = (*head)->next;
}
head = NULL;
}
