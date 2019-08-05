#include "lists.h"
/**
* get_nodeint_at_index - Gets the nth node of a listint_t linked list.
* @head: Pointer to the linked list.
* @index: Index of the desired node.
* Return: Pointer to the node at index, or NULL if the index doesn't exist.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
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
