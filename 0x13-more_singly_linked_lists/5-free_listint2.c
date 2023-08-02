#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a list adn sets head to NULL
 * @head: double pointer to head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
