#include "lists.h"

/**
 *add_nodeint_end - prints a linked list
 *@head: head of the list
 *@n: integer element of the node
 *Return: Address of the added node or NULL
 *Author - Ekene Ezema
 *
 *
 *
 */
int pop_listint(listint_t **head)
{
	int n_data;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	tmp = (*head)->next;
	n_data = (*head)->n;
	free(*head);
	*head = tmp;
	return(n_data);
}
