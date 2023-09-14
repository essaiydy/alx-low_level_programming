#include "lists.h"

/**
 * dlistint_len - function return the length of a list.
 * @h: the first element.
 * Return: number of nodes.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;
	
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
