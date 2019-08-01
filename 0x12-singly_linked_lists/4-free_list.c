#include "lists.h"
#include <stdlib.h>
/**
* free_list - Frees a linked list.
* @head: Pointer to the first element of the list to be free'd.
*/
void free_list(list_t *head)
{
	list_t *iterator;

	while (head)
	{
		iterator = head->next;
		free(head->str);
		free(head);
		head = iterator;
	}
}
