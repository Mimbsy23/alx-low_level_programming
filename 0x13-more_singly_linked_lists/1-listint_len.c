#include "lists.h"

/**
 * listint_len - produces the number of elements in a list
 * a linked list.
 * @h: head of a list.
 *
 * Return: numbers of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t mimsnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		mimsnodes++;
	}
	return (mimsnodes);
}
