#include "lists.h"
/**
* add_dnodeint_end - Adds a node at the end of a list.
* @head: Pointer to the current first element of the list.
* @n: Number to initialize the new element.
* Return: Pointer to the new element or 0 if it fails.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *h = *head;

	if (!head)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		new->prev = *head;
		*head = new;
		return (new);
	}
	while (h->next)
		h = h->next;
	h->next = new;
	new->prev = h;
	return (new);
}
