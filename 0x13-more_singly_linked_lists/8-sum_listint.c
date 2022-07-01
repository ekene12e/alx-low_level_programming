#include "lists.h"

/**
 *sum_listint - sums up all the n data for a list
 *@head: head of the list
 *
 *Return: The sum or NULL
 *Author - Ekene Ezema
 */
int sum_listint(listint_t *head)
{
	int n_sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		n_sum += head->n;
		head = head->next;
	}
	return (n_sum);
}
