#include "lists.h"

/**
* print_list- Prints all the elements of a list
* @h: List
* Return: Number of nodes in h
*/

size_t print_list(const list_t *h)
{
unsigned int n = 0;

while (h)
{
if (h->str == NULL)
printf("[0] (nil)\n");

else
printf("[%i] %s\n", h->len, h->str);

h = h->next;
n++;
}
return (n);
}
