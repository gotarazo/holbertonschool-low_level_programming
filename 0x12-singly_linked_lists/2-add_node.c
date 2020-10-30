#include "lists.h"

/**
* add_node- Adds a new node at the beginning of a list
* @head: Pointer to linked list
* @str: String of arguments
* Return: address of the new element or NULL (if failed)
*/

list_t *add_node(list_t **head, const char *str)
{
unsigned int i;
char *str_copy;
list_t *list;

list = malloc(sizeof(list_t));
if (list == NULL)
return (NULL);
str_copy = strdup(str);
for (i = 0; str[i] != '\0';)
i += 1;

list->str = str_copy;
list->next = *head;
list->len = i;
*head = list;
return (*head);
}
