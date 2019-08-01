#include "lists.h"
/**
* print_list - prints all the elements of a list_t list.
* @h: List to print.
* Return: Number of nodes of the list.
*/
size_t print_list(const list_t *h)
{
	int counter = 0;

	while (h)
	{
		printf("[%d] %s\n", h->str ? h->len : 0, h->str ? h->str : "(nil)");
		h = h->next;
		counter++;
	}
	return (counter);
}
