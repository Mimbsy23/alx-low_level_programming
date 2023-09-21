#include "lists.h"

/**
 * add_node - increases a new node at the beginning of a list_t list.
 * @head: pointer to a pointer to the head of the list_t list.
 * @str: the string to add to the new node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *mims_node = NULL;

	if (!head || !str)
		return (NULL);

	mims_node = malloc(sizeof(list_t));

	if (!mims_node)
		return (NULL);

	mims_node->str = strdup(str);

	if (!mims_node->str)
	{
		free(mims_node);
		return (NULL);
	}

	mims_node->len = strlen(str);
	mims_node->next = *head;
	*head = mims_node;

	return (mims_node);
}
