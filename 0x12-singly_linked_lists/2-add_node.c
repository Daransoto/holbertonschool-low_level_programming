#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
* _strlen - Gives the length of a string.
* @s: String to evaluate.
* Return: The length of the given string.
*/
int _strlen(char *s)
{
	short n = 0;

	if (s)
		while (*s != '\0')
		{
			s++;
			n++;
		}
	return (n);
}
/**
* add_node - Adds a node at the beggining of a list.
* @head: Pointer to the current first element of the list.
* @str: String to initialize the new element.
* Return: Pointer to the new first element or 0 if it fails.
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (!head)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(new->str);
	new->next = *head;
	*head = new;
	return (new);
}
