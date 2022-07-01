#include "lists.h"

/**
 *get_nodeint_at_index - gets the node a particular index
 *@head: head of the list
 *@index: index of the list
 *Return: Address of the node or NULL
 *Author - Ekene Ezema
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
		;
	if (head == NULL)
		return (NULL);

	while (i <= index)
	{
		if (head->next == NULL && i < index)
			return (NULL);
		if (i == index)
			break;
		head = head->next;
		i++;
	}
	return (head);
}
