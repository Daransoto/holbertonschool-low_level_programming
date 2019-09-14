#include "lists.h"
/**
* get_dnodeint_at_index - Gets the nth node of a dlistint_t linked list.
* @head: Pointer to the linked list.
* @index: Index of the desired node.
* Return: Pointer to the node at index, or NULL if the index doesn't exist.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (!head)
		return (0);

	while (index)
	{
		head = head->next;
		if (!head)
			return (0);
		index--;
	}
	return (head);
}
