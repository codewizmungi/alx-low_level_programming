#include "lists.h"

/**
 * free_listint2 - A function that frees a listint_t list.
 * @head: A pointer to the head of a linked list
 * Return: void
 */

void free_listint2(listint_t **head)
{

	listint_t *listintT;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			listintT = *head;
			*head = listintT->next;
			free(listintT);
		}
	}
}
