#include "lists.h"

/**
* sum_listint- Returns the sum of all the data (n) of a list
* @head: Pointer to head of the list
* Return: sum or 0 (if the list is empty)
*/

int sum_listint(listint_t *head)
{
int sum = 0;

while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
