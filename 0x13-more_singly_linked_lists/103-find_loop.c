#include "lists.h"
#include <stdlib.h>
/**
* find_listint_loop - Finds the loop in a linked list.
* @head: Pointer to list.
* Return: Address of node where the loop starts, or NULL if there is no loop.
*/
listint_t *find_listint_loop(listint_t *head)
{

	if (!head)
		return (0);
	while (1)
	{
		if (head->next >= head || !head->next)
			break;
		head = head->next;
	}
	if (head->next)
		return (head->next);
	return (0);
}
