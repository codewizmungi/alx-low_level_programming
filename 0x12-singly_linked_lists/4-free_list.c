#include "lists.h"

/**
 * free_list - A function that frees a list_t list.
 * @head: A pointer to the head of the linked list
 * Return: void;
 */

void free_list(list_t *head)
{

	list_t *listT;

	while (head != NULL)
	{
		listT = head->next;
		free(head->str);
		free(head);
		head = listT;
	}
}
