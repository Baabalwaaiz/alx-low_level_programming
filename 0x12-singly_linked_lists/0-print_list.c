#include "lists.h"

/**
 * print_list - Function that prints all elements in a linked list
 * @h: The passed in linked list
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else

		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}

	return (count);
}
