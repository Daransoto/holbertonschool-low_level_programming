#include "lists.h"
#include <stdlib.h>
/**
* free_listint2 - Frees a linked list.
* @head: Pointer to pointer to the first element of the list to be free'd.
*/
void free_listint2(listint_t **head)
{
	listint_t *iterator;
	
	if (!head || !*head)
		return;
	while (*head)
	{
		iterator = (*head)->next;
		free(*head);
		*head = iterator;
	}
	*head = 0;
}
