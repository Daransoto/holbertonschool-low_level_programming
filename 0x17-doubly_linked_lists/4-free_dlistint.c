#include "lists.h"
/**
* free_dlistint - Frees a linked list.
* @head: Pointer to the first element of the list to be free'd.
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *iterator;

	while (head)
	{
		iterator = head->next;
		free(head);
		head = iterator;
	}
}
