#include <stddef.h>
#include "lists.h" // Include the necessary header file for dlistint_t

/**
 * get_dnodeint_at_index - Returns the nth node of a doubly linked list.
 * @head: Pointer to the head node of the list.
 * @index: Index of the desired node, starting from 0.
 *
 * Return: Pointer to the nth node, or NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0; /* Initialize the count of nodes */

	while (head != NULL)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}

	return (NULL); /* Node at the specified index does not exist */
}
