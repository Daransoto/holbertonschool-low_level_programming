#include "lists.h"
/**
* sum_dlistint - Sums all the data (n) of a dlistint_t linked list.
* @head: Pointer to linked list.
* Return: Sum of all the data.
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
