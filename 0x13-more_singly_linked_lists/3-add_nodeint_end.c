#include "lists.h"

/**
* add_nodeint_end- Adds a new node at the end of a list
* @head: Double pointer to head of list
* @n: Integer (data to put in the new node)
* Return: new, the address of the new element or NULL (if it failed)
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *aux = *head, *new = NULL;

if (aux)
{
while (aux->next)
aux = aux->next;
}
new = malloc(sizeof(listint_t));
if (!new)
return (NULL);
new->n = n;
new->next = NULL;
if (aux)
aux->next = new;
else
*head = new;
return (new);
}
