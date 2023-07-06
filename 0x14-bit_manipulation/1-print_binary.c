#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number
 * @n: a
 * Return: Always 0.
 */

void print_binary(unsigned long int n)
{
	unsigned long int dup = n;
	int length = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while ((dup >>= 1) > 0)
		length++;

	while (length >= 0)
	{
		((n >> length) & 1) ? _putchar('1') : _putchar('0');
		length--;
	}
}
