#include <lists.h>

/**
* add_node_end- Adds a new node at the end of a list
* @head: Pointer to head of list
* @str: String
* Return: head with the address of the new element or NULL (if failed)
*/

list_t *add_node_end(list_t **head, const char *str)
{
unsigned int size;
char *str_copy;
list_t *node;
list_t *ptr_sig;

node = malloc(sizeof(list_t));

if (node == NULL)
return (NULL);
str_copy = strdup(str);
size = 0;

while (str[size] != '\0')
size += 1;

node->str = str_copy;
node->len = size;
node->next = NULL;

if (*head == NULL)
{
*head = node;
return (*head);
}
ptr_sig = *head;

while (ptr_sig->next != NULL)
ptr_sig = ptr_sig->next;

ptr_sig->next = node;
return (*head);
}
