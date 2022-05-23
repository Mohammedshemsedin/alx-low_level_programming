#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * print_listint - a function that print all element in listint_t list.
  * @h: a pointer to listint structure
  *
  * return: the number of node.
  */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
	 	printf("%d\n", h->n);

		h = h->next;

		nodes++;
	}
	return (nodes);
}

