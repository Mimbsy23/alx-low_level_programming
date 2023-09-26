#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of a list.
 *
 * Return: the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *x2;
	listint_t *prev;

	x2 = head;
	prev = head;
	while (head && x2 && x2->next)
	{
		head = head->next;
		x2 = x2->next->next;

		if (head == x2)
		{
			head = prev;
			prev =  x2;
			while (1)
			{
				x2 = prev;
				while (x2->next != head && x2->next != prev)
				{
					x2 = x2->next;
				}
				if (x2->next == head)
					break;

				head = head->next;
			}
			return (x2->next);
		}
	}

	return (NULL);
}
