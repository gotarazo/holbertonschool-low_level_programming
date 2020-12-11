#include "lists.h"

/**
* add_dnodeint_end- Adds a new node at the end of a dlistint_t list
* @head: Pointer to the head of the list
* @n: Number for the new node
* Return: new (address of the new element) or NULL (if it failed)
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new, *tmp;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->next = NULL;
if (*head == NULL)
{
new->prev = NULL;
*head = new;
return (new);
}
tmp = *head;
while (tmp->next != NULL)
tmp = tmp->next;
tmp->next = new;
new->prev = tmp;
return (new);
}
