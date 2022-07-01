#include "lists.h"

/**
 *free_listint - prints a linked list
 *@head: head of the list
 *Author - Ekene Ezema
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
