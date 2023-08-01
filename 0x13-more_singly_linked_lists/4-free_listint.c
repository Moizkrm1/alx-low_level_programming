#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: pointer to the first element in the list
 */
void free_listint(listint_t *head)
{
	listint_t *current, *next_node;

	current = head;

	while (current)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
}
