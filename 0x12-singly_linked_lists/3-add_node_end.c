#include "lists.h"

/**
 * add_node_end - increases a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *mimsy_node, *temp;
	size_t nchar;

	mimsy_node = malloc(sizeof(list_t));
	if (mimsy_node == NULL)
		return (NULL);

	mimsy_node->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	mimsy_node->len = nchar;
	mimsy_node->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = mimsy_node;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = mimsy_node;
	}

	return (*head);
}
