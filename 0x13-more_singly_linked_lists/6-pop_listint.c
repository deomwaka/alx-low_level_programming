#include "lists.h"

/**
 * pop_listint - deletes the head node of listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: the head node's data(n), or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	data = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (data);
}
