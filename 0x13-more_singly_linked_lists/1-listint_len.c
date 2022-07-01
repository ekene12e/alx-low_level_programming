#include "lists.h"

/**
 *listint_len - prints a linked list
 *@h: head of the list
 *
 *Return:Number of nodes in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		/*printf("%d\n", h->n);*/
		h = h->next;
		n++;
	}
	return (n);
}
