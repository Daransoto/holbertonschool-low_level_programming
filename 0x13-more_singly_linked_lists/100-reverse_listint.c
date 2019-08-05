#include "lists.h"
/**
* reverse_listint - Reverses a listint_t linked list.
* @head: Pointer to pointer to a linked list.
* Return: Pointer to the first node of the reversed list.
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = 0, *next;

	if (!*head)
		return (0);

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		if (!next)
			break;
		*head = next;
	}
	return (*head);
}
