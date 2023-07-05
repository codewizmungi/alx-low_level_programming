#include "lists.h"

/**
 * pop_listint - A function that deletes the head node of a
 * listint_t linked list
 * @head: A pointer to the head of a linked list
 * Return: the head of node's data, or 0 if linked list is empty
 */

int pop_listint(listint_t **head)
{

	listint_t *listintT;
	int n = 0;

	if (*head == NULL)
		return (0);

	listintT = *head;
	n = listintT->n;

	*head = (*head)->next;
	free(listintT);

	return (n);
}
