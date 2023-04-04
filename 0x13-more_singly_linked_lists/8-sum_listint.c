#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting the total
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	listint_t *kemp = head;

	while (kemp)
	{
	sum += kemp->n;
	kemp = kemp->next;
	}
	return (sum);
}
