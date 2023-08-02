#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts new node at given position
 * @head: pointer to head of list
 * @idx: index of list where node gets added from 0
 * @n: value of new node
 *
 * Return: teh address of new_node, or NULL if fail
 */
listint_t *insert_nodeint_at_index(listint_t **head,
		unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (temp)
	{
		if (i == idx - 1)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}

		temp = temp->next;
		i++;
	}

	free(new_node);
	return (NULL);
}
