#include "lists.h"

/**
 * list_len - A function that returns the number of
 * elements in a linked list_t list.
 * @h: A singly linked list
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{

	size_t sizeT = 0;

	while (h != NULL)
	{
		h = h->next;
		sizeT++;
	}
	return (sizeT);
}
