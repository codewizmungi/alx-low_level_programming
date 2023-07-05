#include "lists.h"

/**
 * add_nodeint_end - A function that adds a new node at
 * the end of a listint_t list.
 * @head: a pointer to the head of a linked list
 * @n: element to be added
 * Return: Address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *new_node, *current;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	current = *head;

	if (*head == NULL)
		*head = new_node;
	else
	{
		while (current->next != NULL)
			current = current->next;

		current->next = new_node;
	}

	return (*head);
}
