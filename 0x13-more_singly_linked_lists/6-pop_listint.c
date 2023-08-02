#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes head of node list,
 * and returns the head of node's data
 * @head: double pointer to head of list
 *
 * Return: head of node's data (n) else,
 * if linked list empty return 0,
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;
	n = temp->n;
	*head = (*head)->next;
	free(temp);

	return (n);
}
