#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the nth node
 * of a listint_t linked list.
 * @head: A pointer to the head of a linked list
 * @index: Index of the node to return
 * Return: The nth node or NULL if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int a;

	for (a = 0; a < index && head != NULL; a++)
		head = head->next;

	return (head);
}
