#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number, or 0 if b contains invalid characters
 */
unsigned int binary_to_uint(const char *b)
{
	size_t i;
	unsigned int dec_val = 0;

	/* Check for invalid input */
	if (!b)
		return (0);

	/* Convert binary to decimal */
	for (i = 0; i < strlen(b); i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[i] - '0');
	}

	return (dec_val);
}
