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

	if (!*h || !h)
		return (0);
	while (1)
	{
		check = (*h)->next;
		free(*h);
		counter++;
		if (!check || *h <= check)
		{
			*h = 0;
			return (counter);
		}
		*h = check;
	}
}
