#include "lists.h"
/**
* listint_len - Gives the size of a linked list.
* @h: List to get size.
* Return: Number of nodes of the list.
*/
size_t listint_len(const listint_t *h)
{
	int counter = 0;

	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
