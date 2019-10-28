#include "deck.h"
/**
 * _strcmp - compares the ascii sum of characters in two strings
 * @dest: pointer
 * @src: pointer
 * Return: integer. positive if the first string is bigger
 */
int _strcmp(char *dest, char *src)
{
	int i = 0, k = 0;

	while (dest[i] != '\0')
	{
		if (dest[i] > src[i])
		{
			k = dest[i] - src[i];
			break;
		}
		else if (dest[i] < src[i])
		{
			k = dest[i] - src[i];
			break;
		}
		i++;
	}
	if (src[i] != '\0' && k == 0)
		k = -src[i];
	return (k);
}
/**
* check_cards - Checks the order of the cards by value (Ace to King).
* @c1: First card to compare.
* @c2: Second card to compare.
* Return: 1 if a swap is needed, 0 otherwise.
*/
short check_cards(deck_node_t *c1, deck_node_t *c2)
{
	short idx1 = -1, idx2 = -1, i = 0;
	char *cards[] = {"Ace", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10",
			"Jack", "Queen", "King"};

	if (c1->card->kind != c2->card->kind)
		return (0);

	while ((idx1 == -1 || idx2 == -1) && i < 14)
	{
		if (!_strcmp((char *)c1->card->value, cards[i]))
			idx1 = i;
		if (!_strcmp((char *)c2->card->value, cards[i]))
			idx2 = i;
		i++;
	}
	if ((idx1 > idx2) && idx1 >= 0 && idx2 >= 0)
		return (1);
	return (0);
}
/**
* sort_deck - Sorts a deck of cards.
* @deck: Deck of cards.
*/
void sort_deck(deck_node_t **deck)
{
	deck_node_t *iterator = *deck, *temp;
	char swap = 1;

	while (swap)
	{
		swap = 0;
		while (iterator->next)
		{
			temp = iterator->next;
			if (iterator->card->kind > temp->card->kind || check_cards(iterator, temp))
			{
				swap = 1;
				if (*deck == iterator)
					*deck = temp;
				iterator->next = temp->next;
				if (temp->next)
					temp->next->prev = iterator;
				temp->next = iterator;
				temp->prev = iterator->prev;
				if (iterator->prev)
					iterator->prev->next = temp;
				iterator->prev = temp;
				continue;
			}
			iterator = iterator->next;
		}
		iterator = *deck;
	}
}
