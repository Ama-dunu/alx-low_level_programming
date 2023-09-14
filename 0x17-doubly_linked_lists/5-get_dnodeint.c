#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: Pointer to head of the list.
 * @index: Index of the node to search for, starting from 0.
 *
 * Return: Nth node or NULL.
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size = 0;
	dlistint_t *tmp;

	if (head == NULL)
		return (NULL);

	tmp = head;
	while (tmp)
	{
		if (index == size)
			return (tmp);
		size++;
		tmp = tmp->next;
	}

	return (NULL);
}

