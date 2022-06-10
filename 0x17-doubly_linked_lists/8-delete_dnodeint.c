#include "lists.h"
/**
 *delete_dnodeint_at_index - deletes node at index
 *@index: index
 *@head: head of list
 *
 *Return: 1 if success -1 if failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int counter;
	dlistint_t *tmp;

	tmp = *head;
	counter = 0;
	if (*head == NULL)
		return (-1);
	while (*head)
	{
		if (index == counter)
		{
			dlistint_t *current = NULL;

			(*head)->prev = current;
			current->next = (*head)->next;
			free(head);
			return (1);
		}
	counter++;
	*head = (*head)->next;
	}

	*head = tmp;
	return (-1);
}
