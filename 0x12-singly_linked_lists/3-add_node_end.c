#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
/**
 *add_node_end - adds a new node to a list
 *@head: head of the list
 *@str: string compnent of new node
 *
 *Return: address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	/*unsigned int len = strlen(str);*/
	
	new = malloc(sizeof(list_t));
	new->next = NULL;
	new->str = strdup(str);

	while (head->next)
	{
		head = head->next;
	}
	head->next = new;
	return (new);
}
