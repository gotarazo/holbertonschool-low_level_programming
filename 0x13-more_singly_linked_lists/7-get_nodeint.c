#include "lists.h"

/**
* get_nodeint_at_index- Returns the nth node of a list
* @head: Pointer to the head
* @index: Index of the node starting at 0
* Return: head, the located node or NULL (If node does not exist)
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int nod;

for (nod = 0; nod < index; nod++)
{
if (head == NULL)
return (NULL);

head = head->next;
}
return (head);
}
