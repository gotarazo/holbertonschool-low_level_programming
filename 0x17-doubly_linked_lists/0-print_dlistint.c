#include "lists.h"

/**
* print_dlistint- Prints all the elements of a dlistint_t list
* @h: Head of the dlistint_t list
* Return: nod (number of nodes)
*/

size_t print_dlistint(const dlistint_t *h)
{
size_t nod = 0;

while (h)
{
nod++;
printf("%d\n", h->n);
h = h->next;
}
return (nod);
}

