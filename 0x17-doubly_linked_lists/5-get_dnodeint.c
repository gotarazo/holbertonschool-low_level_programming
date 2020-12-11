#include "lists.h"

/**
* get_dnodeint_at_index- Returns the nth node of a dlistint_t linked list
* @head: Head of the list
* @index: Index of the node to locate (starting from 0)
* Return: head (with the address of the located node) or NULL (if not exist)
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
for (; index != 0; index--)
{
if (head == NULL)
return (NULL);

head = head->next;
}
return (head);
}
