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
	listint_t temp = *head, *check = (listint_t *)0xFFFFFFFF;

	if (!head)
		exit(98);
	printf("[%p]", (void *)head);
	while (1)
	{
		printf(" %d\n", temp.n);
		if (temp.next == head || !temp.next || temp.next >= check)
			break;
		check = temp.next;
		printf("[%p]", (void *)temp.next);
		temp = *temp.next;
		counter++;
	}
	if (temp.next)
		printf("-> [%p] %d\n", (void *)temp.next, temp.next->n);
	return (counter);
}
