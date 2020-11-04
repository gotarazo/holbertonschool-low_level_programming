#include "lists.h"

/**
* listint_len- Returns the number of elements in a linked list
* @h: Pointer to head of the list
* Return: nod (Number of elements in the list)
*/

size_t listint_len(const listint_t *h)
{
size_t nod = 0;

while (h)
{
nod++;
h = h->next;
}
return (nod);
}
