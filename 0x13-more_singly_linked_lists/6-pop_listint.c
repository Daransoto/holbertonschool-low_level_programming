#include "lists.h"
#include <stdlib.h>
/**
* pop_listint - Deletes the head node of a listint_t linked list.
* @head: Pointer to pointer to linked list.
* Return: The head node's data (n).
*/
int pop_listint(listint_t **head)
{
	int n;
	listint_t *first = *head;

	if (!*head)
		return (0);

	n = (*head)->n;
	*head = (*head)->next;
	free(first);
	return (n);
}
