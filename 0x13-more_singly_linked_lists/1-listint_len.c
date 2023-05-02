#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @head: const pointer to linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *head)
{
	size_t num = 0;

	for (; head != NULL; head = head->next)
	{
		num++;
	}

	return (num);
}
