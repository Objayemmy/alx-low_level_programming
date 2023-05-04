#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @n: pointer to the number to change
 * @index: index of the bit to clear
 *
 * Return: 1 for success, 0 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* Check if index is within range */
	if (index > 63)
		return (0);

	/* Clear the bit at the specified index to 0 */
	unsigned long int mask = ~(1UL << index);
	*n &= mask;

	return (1);
}
