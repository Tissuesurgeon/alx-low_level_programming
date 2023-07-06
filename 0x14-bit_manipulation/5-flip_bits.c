#include "main.h"

/**
 * flip_bits - a function that returns the number of bits to flip to get from one number to another
 * @n: a
 * @m: a
 * Return: Always 0.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int sol = n ^ m;
	unsigned long int cant = 0;

	while (sol)
	{
		cant += sol & 1;
		sol = sol >> 1;
	}
	return (cant);
}
