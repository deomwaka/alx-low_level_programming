#include "lists.h"

/**
 * listint_len - returns the number of elements in listint_t list
 * @h: pointer to the head of listint_t struct
 *
 * Return: number of elements(nodes) in listint_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
