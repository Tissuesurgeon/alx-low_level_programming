#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: number of memory bytes to allocate
 *
 * Return: pointer to the allocated memory or exit normal with statis 98
 */

void *malloc_checked(unsigned int b)
{
	void *memory;

	extra_memory = malloc(b);

	if (extra_memory == NULL)
		exit(98);

	return (extra_memory);
}
