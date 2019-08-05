#include "lists.h"
/**
* print_listint - prints all the elements of a listint_t list.
* @h: List to print.
* Return: Number of nodes of the list.
*/
size_t print_listint(const listint_t *h)
{
	int counter = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
