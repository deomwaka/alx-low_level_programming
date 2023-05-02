#include "lists.h"

/**
 * reverse_listint - reverses the order of listint_t linked list
 * @head: pointer to the head node of the list
 *
 * Return: pointer to the new node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;

	return (*head);
}
