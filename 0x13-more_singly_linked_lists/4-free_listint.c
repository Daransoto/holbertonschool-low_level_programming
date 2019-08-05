#include "lists.h"
#include <stdlib.h>
/**
* free_listint - Frees a linked list.
* @head: Pointer to the first element of the list to be free'd.
*/
void free_listint(listint_t *head)
{
	listint_t *iterator;

	while (head)
	{
		iterator = head->next;
		free(head);
		head = iterator;
	}
}
