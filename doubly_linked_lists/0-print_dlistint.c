#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: dlistint_t pointer a list
 *
 * Return: size_t - the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
