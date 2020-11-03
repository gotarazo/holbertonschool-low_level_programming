#include "lists.h"

/**
* print_listint- Prints all the elements of a list
* @h: Pointer to head of the list
* Return: nod (Number of nodes in the list)
*/

size_t print_listint(const listint_t *h)
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
