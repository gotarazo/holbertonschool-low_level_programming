#include "lists.h"

/**
* listint_t *find_listint_loop- Finds the loop in a linked list
* @head: Pointer o head of list
* Return: adv1, address of node where the loop starts or NULL if no loop
*/

listint_t *find_listint_loop(listint_t *head)
{
listint_t *adv1 = head, *adv2 = head;

while (adv1 && adv2 && adv2->next)
{
adv1 = adv1->next;
adv2 = adv2->next->next;
if (adv1 == adv2)
return (adv1);
}
return (NULL);
}
