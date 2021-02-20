#include "lists.h"

/**
* insert_dnodeint_at_index- Inserts a new node in a given position
* @h: Double pointer to the head of the list
* @idx: Position to insert the new node
* @n: Data for the new node
* Return: new (address of the new node) or NULL (if it failed)
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new, *tmp = *h;

if (idx == 0)
return (add_dnodeint(h, n));

for (; idx != 1; idx--)
{
tmp = tmp->next;
if (tmp == NULL)
return (NULL);
}
if (tmp->next == NULL)
return (add_dnodeint_end(h, n));

new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->prev = tmp;
new->next = tmp->next;
tmp->next->prev = new;
tmp->next = new;
return (new);
}