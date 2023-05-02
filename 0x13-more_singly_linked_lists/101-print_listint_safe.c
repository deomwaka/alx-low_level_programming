#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints listint_t linked list safely
 * @head: pointer to the head of the list
 *
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *visited[1024];  /* array to store visited nodes */
	size_t count = 0;
	size_t i;

	while (head != NULL)
	{
		/* check if we have already visited this node */
		for (i = 0; i < count; i++)
		{
			if (visited[i] == head)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				printf("Loop detected, %lu elements not printed\n", count - i);
				exit(98);
			}
		}

		/* mark the current node as visited */
		visited[count] = head;
		count++;

		/* print the current node */
		printf("[%p] %d\n", (void *)head, head->n);

		/* move to the next node */
		head = head->next;
	}

	return (count);
}
