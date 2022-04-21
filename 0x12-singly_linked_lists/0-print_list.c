#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 *print_list - prints content of a linked list
 *
 *@h: pointer to the first node
 *Return: size_t(number of nodes)
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
	if (h->str)
		printf("[%u] %s\n", h->len, h->str);
	else
		printf("[0] (nil)\n");
	i++;
	h = h->next;
	}
	return (i);
}
