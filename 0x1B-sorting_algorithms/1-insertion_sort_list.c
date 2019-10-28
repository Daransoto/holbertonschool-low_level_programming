#include "sort.h"

/**
 * swap - swaps two contiguous doubly linked nodes
 * @left: left node
 * @right: right node
 * @head: Head of the list
 * Return: void
 */
listint_t *swap(listint_t *left, listint_t *right, listint_t *head)
{
	listint_t *temp;

	if (right->next)
		right->next->prev = left;
	if (left->prev)
		left->prev->next = right;

	right->prev = left->prev;
	left->next = right->next;
	right->next = left;
	left->prev = right;

	temp = left;
	left = right;
	right = temp;

	if (left->prev == NULL)
		return (left);
	else
		return (head);
}

/**
 * insertion_sort_list - run insertion sort over a
 * double linked list
 * @list: pointer to a dlinked list
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *left, *right, *ptr;

	if (list == NULL || *list == NULL)
		return;

	if ((*list)->next == NULL)
		return;

	ptr = (*list)->next;
	right = ptr;
	left = ptr->prev;

	while (ptr != NULL)
	{
		while (left != NULL && left->n > right->n)
		{
			*list = swap(left, right, *list);
			print_list(*list);
			left = right->prev;
		}
		left = ptr;
		ptr = ptr->next;
		right = ptr;
	}

}
