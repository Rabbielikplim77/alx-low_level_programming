#include <stdlib.h>
#include "lists.h"

/**
 * list_len - a function that returns the number of elements in a linked list
 * @h: function argument (pointer)
 * Return: number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}