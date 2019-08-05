#include "lists.h"
#include <stdlib.h>
/**
* find_listint_loop - Finds the loop in a linked list.
* @head: Pointer to list.
* Return: Address of node where the loop starts, or NULL if there is no loop.
*/
listint_t *find_listint_loop(listint_t *head)
{
	int counter = 0;

	if (!head)
		return (0);
	while (1)
	{
		if (!head->next || head->next >= head)
			break;
		head = head->next;
		counter++;
	}
	if (!head->next)
		return (0);
	return (head->next);
}
