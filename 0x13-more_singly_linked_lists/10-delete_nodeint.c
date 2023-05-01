#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at index of linked list
 * @head: pointer to the head of the list
 * @index: index of node to be deleted, starts from 0
 *
 * Return: 1 if succeeded, else (-1) if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *del_node = *head;
	unsigned int i;

	if (del_node == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(del_node);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (del_node->next == NULL)
			return (-1);
		del_node = del_node->next;
	}

	temp = del_node->next;
	del_node->next = temp->next;
	free(temp);

	return (-1);
}
