#include "lists.h"

/**
* free_listint_safe- Frees a linked list
* @h: Double pointer to the linked list
* Return: Size of the list freed
*/

size_t free_listint_safe(listint_t **h)
{
listint_t *slow_ptr, *fast_ptr, *free_ptr;
size_t size = 0;

if (!h || *h == NULL)
return (0);
fast_ptr = (*h)->next;
slow_ptr = *h;

while (fast_ptr && fast_ptr < slow_ptr)
{
free_ptr = slow_ptr;
fast_ptr = fast_ptr->next;
slow_ptr = slow_ptr->next;
size += 1;
free(free_ptr);
}
size += 1;
free(slow_ptr);
*h = NULL;
return (size);
}
