#include "lists.h"
#include <stdlib.h>
/**
* delete_nodeint_at_index - Deletes node at index of a listint_t linked list.
* @head: Pointer to pointer to the linked list.
* @index: Index of the node to be deleted.
* Return: 1 if succeeded, -1 if not.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *iterator = *head, *temp;

	if (!*head)
		return (-1);

	if (!index)
	{
		*head = iterator->next;
		free(iterator);
		return (1);
	}
	while (index > 1)
	{
		iterator = iterator->next;
		if (!iterator)
			return (-1);
		index--;
	}
	temp = iterator->next;
	if (!temp)
		return (-1);
	iterator->next = temp->next;
	free(temp);
	return (1);
}
