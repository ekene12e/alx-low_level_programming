#include "lists.h"
/**
 *dlist_len - returns numberofmembers of a doubly linked lists
 *@h: head of the lists
 *
 *Return: returns number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t number_of_nodes = 0;

	while (h)
	{
		number_of_nodes++;
		h = h->next;
	}
	return (number_of_nodes);
}

