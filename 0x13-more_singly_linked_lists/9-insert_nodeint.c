#include "lists.h"

/**
* insert_nodeint_at_index- Inserts a new node at a given position
* @head: Pointer to head of list
* @idx: Index of the list
* @n: Data to new node
* Return: new, address of the new node or NULL (if it failed)
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *aux, *new;

if (head == NULL)
return (NULL);

aux = *head;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);

new->n = n;
if (idx == 0)
{
new->next = aux;
*head = new;
return (new);
}
while (idx-- > 1)
{
aux = aux->next;
if (aux == NULL)
return (NULL);
}
new->next = aux->next;
aux->next = new;
return (new);
}
