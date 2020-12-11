#include "lists.h"

/**
* dlistint_len- Return the number of elements in a linked dlistint_t list
* @h: Head of the dlistint_t list
* Return: nod (number of elements in the list)
*/

size_t dlistint_len(const dlistint_t *h)
{
size_t nod = 0;

while (h)
{
nod++;
h = h->next;
}
return (nod);
}
