#include "lists.h"
#include <stdlib.h>
/**
* insert_nodeint_at_index - Inserts a new node at a given position.
* @head: Pointer to pointer to the linked list.
* @idx: Index desired for the new node.
* @n: Number to initialize the new node.
* Return: Pointer to the node at index, or NULL if the index doesn't exist.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *iterator = *head, *new;

	if (!*head || !head)
		return (0);

	while (idx > 1)
	{
		iterator = iterator->next;
		if (!iterator)
			return (0);
		idx--;
	}
	new = malloc(sizeof(listint_t));
	if (!new)
		return (0);
	if (!idx)
	{
		*head = new;
		new->next = iterator;
	}
	else
	{
		new->next = iterator->next;
		iterator->next = new;
	}
	new->n = n;
	return (new);
}
