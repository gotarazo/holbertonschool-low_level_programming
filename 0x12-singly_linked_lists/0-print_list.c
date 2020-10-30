#include "lists.h"
#include <stdio.h>

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
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", h->len, h->str);

h = h->next;
n++;
}
return (n);
}
