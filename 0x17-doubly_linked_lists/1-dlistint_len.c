#include <stddef.h>
#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a doubly linked list.
 * @h: Pointer to the head node of the list.
 *
 * Return: The number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0; /* Initialize node count */

	while (h != NULL) /* Traverse through the list */
	{
		h = h->next; /* Move to the next node */
		node_count++; /* Increment the node count */
	}

	return (node_count); /* Return the total number of nodes */
}
