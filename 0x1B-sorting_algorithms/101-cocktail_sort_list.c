#include "sort.h"

/**
 * get_last_node - get the last node of a
 * doubly linked list
 * @head: Head of the list
 * Return: pointer to last node
 */
listint_t *get_last_node(listint_t *head)
{
	listint_t *ptr = head;

	while (ptr->next != NULL)
		ptr = ptr->next;

	return (ptr);
}

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
 * shake_forward - Runs a bubblesort forward
 * @left: left node
 * @right: right node
 * @head: head of the list
 * Return: result struct with status and new head
 */
result shake_forward(listint_t *left, listint_t *right, listint_t *head)
{
	listint_t *neighbor;
	result swapped;

	swapped.status = 0;
	swapped.head = head;

	if (left == right)
		return (swapped);

	neighbor = left->next;
	while (left != right)
	{
		if (left->n > neighbor->n)
		{
			head = swap(left, neighbor, head);
			print_list(head);
			swapped.status = 1;
			swapped.head = head;
		}
		left = neighbor;
		neighbor = neighbor->next;
	}
	return (swapped);
}

/**
 * shake_reverse - Runs a bubblesort backwards
 * @left: left node
 * @right: right node
 * @head: head of the list
 * Return: result struct with status and new head
 */
result shake_reverse(listint_t *left, listint_t *right, listint_t *head)
{
	listint_t *neighbor;
	result swapped;

	swapped.status = 0;
	swapped.head = head;

	if (left == right)
		return (swapped);

	neighbor = right->prev;
	while (right != left)
	{
		if (right->n < neighbor->n)
		{
			head = swap(neighbor, right, head);
			print_list(head);
			swapped.status = 1;
			swapped.head = head;
		}
		right = neighbor;
		neighbor = neighbor->prev;
	}
	return (swapped);
}

/**
 * cocktail_sort_list - sorts a doubly linked list
 * of integers in ascending order using the Cocktail shaker
 * sort algorithm
 * @list: head of the list
 * Return: void
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t  *left, *right;
	result swapped;

	if (!list || !*list || !(*list)->next)
		return;

	left = *list;
	right = get_last_node(*list);
	swapped.status = 0;
	swapped.head = *list;

	do {
		swapped = shake_forward(left, right, swapped.head);
		left = swapped.head;
		right = get_last_node(left);
		swapped = shake_reverse(left, right, swapped.head);
		left = swapped.head;
		right = get_last_node(left);
	} while (swapped.status == 1);

	*list = swapped.head;
}
