#include "lists.h"
#include <stdlib.h>
/**
* add_nodeint - Adds a node at the beggining of a list.
* @head: Pointer to the current first element of the list.
* @n: Number to initialize the new element.
* Return: Pointer to the new first element or 0 if it fails.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (!head)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
