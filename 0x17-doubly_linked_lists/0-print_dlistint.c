#include "lists.h"
/**
 *print_dlistint - prints contents of a doubly linked lists
 *@h: head of the lists
 *
 *Return: returns number of nodes printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t number_of_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		number_of_nodes++;
		h = h->next;
	}
	return (number_of_nodes);
}
