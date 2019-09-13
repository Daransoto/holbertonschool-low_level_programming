#include "lists.h"
/**
* dlistint_len - Gives the size of a linked list.
* @h: List to get size.
* Return: Number of nodes of the list.
*/
size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
