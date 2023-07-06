#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: a
 * Return: Always 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ress = 0;

	int x = 0, lent = 0;

	if (!b)
		return (0);
	while (b[lent + 1])
	{
		if (b[lent] != '0' && b[lent] != '1')
			return (0);
		lent++;
	}
	for (x = 0; x <= lent; x++)
	{
		if (b[x] == '1')
			ress = ress + (1 << (lent - x));
	}
	return (ress);
}
