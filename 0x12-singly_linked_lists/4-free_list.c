#include "lists.h"

/**
 * free_list - A function that frees a list_t list.
 * @head: A pointer to the head of the linked list
 * Return: void;
 */

void free_list(list_t *head)
{

	list_t *current_node;

	current_node = head;

	while (current_node != NULL)
	{
		current_node = current_node->next;
		free(current_node->str);
		free(current_node);
	}
}
