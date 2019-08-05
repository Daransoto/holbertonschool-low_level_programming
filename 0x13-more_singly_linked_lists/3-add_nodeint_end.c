#include "lists.h"
#include <stdlib.h>
/**
* add_nodeint_end - Adds a node at the end of a list.
* @head: Pointer to the current first element of the list.
* @n: Number to initialize the new element.
* Return: Pointer to the new element or 0 if it fails.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *h = *head;

	if (!head)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (0);
	new->n = n;
	new->next = 0;
	if (!*head)
	{
		*head = new;
		return (new);
	}
	while (h->next)
		h = h->next;
	h->next = new;
	return (new);
}
