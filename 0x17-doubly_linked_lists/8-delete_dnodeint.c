#include "lists.h"
/**
* delete_dnodeint_at_index - Deletes node at index of a dlistint_t linked list.
* @head: Pointer to pointer to the linked list.
* @index: Index of the node to be deleted.
* Return: 1 if succeeded, -1 if not.
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *iterator = *head, *temp;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		*head = iterator->next;
		if (iterator->next)
			iterator->next->prev = NULL;
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
	if (temp->next)
		temp->next->prev = iterator;
	free(temp);
	return (1);
}
