#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the data in a listint_t list.
 * @head: Pointer to the first node in the linked list.
 *
 * Return: The resulting sum.
 */
int sum_listint(listint_t *head)
{
	int total_sum = 0;
	listint_t *current = head;

	while (current)
	{
		total_sum += current->n;
		current = current->next;
	}

	return (total_sum);
}

