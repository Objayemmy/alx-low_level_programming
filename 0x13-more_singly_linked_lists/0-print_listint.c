#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @head: const pointer to linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *head)
{
	size_t num = 0;

	for (; head != NULL; head = head->next)
	{
		printf("%d\n", head->n);
		num++;
	}

	return (num);
}
