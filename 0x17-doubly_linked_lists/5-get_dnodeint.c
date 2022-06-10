#include "lists.h"
/**
 *get_dnodeint_at_index - returns node at index
 *
 *@head: head of the list
 *@index: index
 *
 *Return: returns node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;

	count = 0;
	while (head->next)
	{
		if (count == index)
		{
			if (head)
				return (head);
			return (NULL);
		}
		count++;
		head = head->next;
	}
	return (head);
}
