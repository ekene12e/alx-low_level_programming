#include "lists.h"

/**
 *pop_listint - deletes the head of a linked list
 *@head: head of the list
 *
 *Return: n data of the deleted head
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
	return (n_data);
}
