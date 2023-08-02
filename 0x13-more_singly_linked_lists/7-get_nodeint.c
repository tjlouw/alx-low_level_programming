#include "lists.h"

/**
 * get_nodeint_at_index -  returns nth node oa a linked list
 * @head: pointer to head of list
 * @index: index of node, starting at 0
 *
 * Return: NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
		{
			return (head);
		}

		head = head->next;
		i++;
	}
	return (NULL);
}
