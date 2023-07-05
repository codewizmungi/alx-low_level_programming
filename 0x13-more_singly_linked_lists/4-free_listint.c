#include "lists.h"

/**
 * free_listint - A function that frees a listint_t list.
 * @head: head of linked list
 * Return: void
 */

void free_listint(listint_t *head)
{

	listint_t *listintT = head;

	while (listintT != NULL)
	{
		head = head->next;
		free(lintintT);
	}
}
