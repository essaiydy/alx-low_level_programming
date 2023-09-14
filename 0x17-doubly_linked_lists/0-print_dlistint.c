#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - print and count all element of a list.
 * @h: element to start.
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (i);
	while (h->prev != NULL)
		h = h->prev;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
