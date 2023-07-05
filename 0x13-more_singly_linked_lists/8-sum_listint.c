#include "lists.h"

/**
 * sum_listint - A function that returns the sum of all the
 * data (n) of a listint_t linked list.
 * @head: A pointer to the head of the linked list
 * Return: the sum of all the data in the list,
 * or 0 if list is empty
 */

int sum_listint(listint_t *head)
{

	int data_sum = 0;

	while (head != NULL)
	{
		data_sum += head->n;
		head = head->next;
	}
	return (data_sum);
}
