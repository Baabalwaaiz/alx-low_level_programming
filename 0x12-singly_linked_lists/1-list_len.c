#include "lists.h"

/**
 * list_len - Prints length of linked list
 * @h: linked list
 * Return: The number of of nodes in linked list
 */

size_t list_len(const list_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
		h = h->next;

	return (count);
}
