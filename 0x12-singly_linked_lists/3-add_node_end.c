#include "lists.h"

/**
 * add_node_end - A function that adds a new node
 * at the end of a list_t list.
 * @head: A pointer to head of linked list
 * @str: New element to add to be added to linked list
 * Return: Address of the new element or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{

	list_t *current_node, *new_node;
	int a;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (a = 0; str[a]; a++)
		;

	new_node->len = a;
	new_node->next = NULL;
	current_node = *head;

	if (current_node == NULL)
		*head = new_node;
	else
		current_node->next = new_node;


	return (new_node);

}
