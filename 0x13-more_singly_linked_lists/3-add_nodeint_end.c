#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: double pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	/* Initialize the new node */
	new_node->n = n;
	new_node->next = NULL;

	/* If the list is empty, update the head to the new node and return */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* Traverse to the end of the list */
	temp = *head;
	while (temp->next)
		temp = temp->next;

	/* Attach the new node to the last node in the list */
	temp->next = new_node;

	return (new_node);
}
