#include "lists.h"
/**
 * list_len - imprints the number of elements in a list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t mims_element;

	mims_element = 0;
	while (h != NULL)
	{
		h = h->next;
		mims_element++;
	}
	return (mims_element);
}
