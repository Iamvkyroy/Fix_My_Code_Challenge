#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - It prints a doubly linkedlist of integers
 *
 * @h: The pointer to the first element of a list
 *
 * Return: The num of element printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n;

	n = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
