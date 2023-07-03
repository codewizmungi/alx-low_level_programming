#include "lists.h"

/**
 * print_list - A function that prints all the elements
 * of a list_t list.
 * @h: singly linked list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{

	size_t sizeT = 0;

	while (h != NULL)
	{
		if(h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		sizeT++;
	}
	return (sizeT);
}