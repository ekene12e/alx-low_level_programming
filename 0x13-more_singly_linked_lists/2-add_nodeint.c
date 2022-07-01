#include "lists.h"

/**
 *add_nodeint - adds a node at the beginning of a linked list
 *@head: pointer to the head pointer
 *@n: content of the node
 *Return: Address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head, *tmp;

	new_head = (listint_t *)malloc(sizeof(listint_t));
		if (new_head == NULL)
		return (NULL);
	new_head->n = n;
	tmp = *head;
	*head = new_head;
	(*head)->next = tmp;
	return (*head);
}
