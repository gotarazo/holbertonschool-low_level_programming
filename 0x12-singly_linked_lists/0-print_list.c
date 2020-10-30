#include "lists.h"

/**
* print_list- Prints all the elements of a list
* @h: List
* Return: Number of nodes in h
*/

size_t print_list(const list_t *h)
{
int n = 0;

while (h)
{
printf("[%u] ", h->len);
if (!h->str)
printf("(nil)\n");
else
printf("%s\n", h->str);

h = h->next;
n++;
}
return (n);
}
