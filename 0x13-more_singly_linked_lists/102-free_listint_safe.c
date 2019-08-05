#include "lists.h"
#include <stdlib.h>
/**
* free_listint_safe - Frees a listint_t list.
* @h: Pointer to pointer to list to free.
* Return: Number of nodes of the list.
*/
size_t free_listint_safe(listint_t **h)
{
	int counter = 0;
	listint_t *check = *h;

	if (!*h)
		return (0);
	while (1)
	{
		if (!(*h)->next || (*h)->next >= check)
			break;
		check = (*h)->next;
		free(*h);
		*h = check;
		counter++;
	}
	free(*h);
	(*h) = 0;
	return (counter);
}
