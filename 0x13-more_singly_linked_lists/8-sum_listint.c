#include "lists.h"

/**
 * sum_listint - returns the sum of all data of linked list
 * @head: pointer to head of list
 *
 * Return: sum of all the data,
 * else 0 if lis tis empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
