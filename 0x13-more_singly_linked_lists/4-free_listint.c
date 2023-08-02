#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a list
 * @head:pointer to head of list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
