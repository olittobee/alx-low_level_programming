#include "lists.h"

/**
 * pop_listint - remove the head node of a linked list
 * @head: pointer to the first element in the list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *ola;
	int num;

	if (!head || !*head)
	return (0);

	num = (*head)->n;
	ola = (*head)->next;
	free(*head);
	*head = ola;

	return (num);
}
