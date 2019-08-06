#include "lists.h"
#include <stdlib.h>
/**
* print_listint_safe - Prints all the elements of a listint_t list.
* @head: Pointer to list to print.
* Return: Number of nodes of the list.
*/
size_t print_listint_safe(const listint_t *head)
{
	int counter = 0;
	listint_t *temp = (listint_t *)head;

	if (!head)
		return (0);
	while (1)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		counter++;
		if (temp->next >= temp || !temp->next)
			break;
		temp = temp->next;
	}
	if (temp->next)
		printf("-> [%p] %d\n", (void *)temp->next, temp->next->n);
	return (counter);
}
