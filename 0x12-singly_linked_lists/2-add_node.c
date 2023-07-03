#include "lists.h"

/**
 * add_node - A function that adds a new node at
 * the beginning of a list_t list.
 * @head: pointer to head of linked list
 * @str: New element to add to linked list
 * Return: The address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{

	list_t *new_node;
	int a;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (a = 0; str[a]; a++)
		;

	new_node->len = a;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
