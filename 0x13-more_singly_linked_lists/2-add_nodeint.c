#include "lists.h"

/**
 * add_nodeint - A function that adds a new node at the
 * beginning of a listint_t list.
 * @head: The pointer to the head of a linked list
 * @n: elemented to be added
 * Return: Address of the new element or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	new_node = *head;

	return (new_node);
}
