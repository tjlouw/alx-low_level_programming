#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes node at index of linked list
 * @head: double pointer to pointer of head of list
 * @index: index of node to delete starting at 0
 *
 * Return: 1 if success, else -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *next;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (temp && i < index - 1)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL || temp->next == NULL)
	{
		return (-1);
	}

	next = temp->next->next;
	free(temp->next);
	temp->next = next;
	return (1);
}
