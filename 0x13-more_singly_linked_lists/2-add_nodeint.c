#include "lists.h"

/**
* add_nodeint- Adds a new node at the beginning of a list
* @head: Pointer to the address of the head of the list
* @n: Integer for the new node
* Return: The address of the new element or NULL (if it failed)
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *aux;

new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->next = *head;
*head = new;

return (new);
}
