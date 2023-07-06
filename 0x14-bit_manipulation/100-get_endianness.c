#include "main.h"

/**
 * get_endianness - function that checks the endianness
 * Return: Always 0.
 */

int get_endianness(void)
{
	int x = 1;

	if (*(char *)&x)
		return (1);
	return (0);
}
