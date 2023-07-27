#include "lists.h"

/**
 * list_len - returnsnumber of elements in a linked list
 * @h: pointer to head of list
 *
 * Return: the number of elements in list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
