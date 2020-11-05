#include "lists.h"

/**
* print_listint_safe- Prints a linked list
* @head: Pointer to head of list
* Return: Number of nodes in list or status 98 (if fails)
*/

size_t print_listint_safe(const listint_t *head)
{
const listint_t *ptr;
size_t i;

if (head == NULL)
exit(98);

ptr = head;

for (i = 0; ptr != NULL; i++)
{
printf("[%p] %d\n", (void *)ptr, ptr->n);
ptr = ptr->next;
if (ptr->next == NULL)
return (i);
}
return (i);
}
