#include "lists.h"
/**
* sum_listint - Sums all the data (n) of a listint_t linked list.
* @head: Pointer to linked list.
* Return: Sum of all the data.
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
