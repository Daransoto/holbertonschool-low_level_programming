#include "lists.h"
/**
* insert_dnodeint_at_index - Inserts a new node at a given position.
* @head: Pointer to pointer to the linked list.
* @idx: Index desired for the new node.
* @n: Number to initialize the new node.
* Return: Pointer to the node at index, or NULL if the index doesn't exist.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n
)
{
	dlistint_t *iterator = *head, *new;

	if ((!*head && idx) || !head)
		return (0);

	while (idx > 1)
	{
		iterator = iterator->next;
		if (!iterator)
			return (0);
		idx--;
	}
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (0);
	if (!idx)
	{
		new->prev = NULL;
		if (iterator)
			iterator->prev = new;
		*head = new;
		new->next = iterator;
	}
	else
	{
		new->next = iterator->next;
		if (iterator->next)
			iterator->next->prev = new;
		iterator->next = new;
		new->prev = iterator;
	}
	new->n = n;
	return (new);
}
