#include "lists.h"
/**
 *free_dlistint - frees a list
 *@head: head of the list
 *
 *Return: Null
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *cursor = head;

	while (head)
	{
		head = head->next;
		free(cursor);
		cursor = head;
	}
}
