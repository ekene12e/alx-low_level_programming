#include "lists.h"

/**
 *add_nodeint_end - prints a linked list
 *@head: head of the list
 *@n: integer element of the node
 *Return: Address of the added node or NULL
 *Author - Ekene Ezema
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_h = *head;
	listint_t *tmp = (listint_t *)malloc(sizeof(listint_t));
		if (tmp == NULL)
			return (NULL);
	tmp->next = NULL;
	tmp->n = n;

	if (*head == NULL)
	{
		*head = tmp;
		return (tmp);
	}
	while (new_h->next)
	{
		new_h = new_h->next;
	}
	new_h->next = tmp;
	return (new_h);
}
