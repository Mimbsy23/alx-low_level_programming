#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *mims_list;

	while ((mims_list = head) != NULL)
	{
		head = head->next;
		free(mims_list->str);
		free(mims_list);
	}
}
