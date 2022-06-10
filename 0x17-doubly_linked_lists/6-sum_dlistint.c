#include "lists.h"
/**
 *sum_dlistint - sums the n data a linked list
 *@head: head of the list
 *
 *Return: sum of n or 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
