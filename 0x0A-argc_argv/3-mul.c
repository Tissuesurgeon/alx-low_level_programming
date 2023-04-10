#include <stdio.h>
#include <stdlib.h>

/**
 * main - Displays the multiplication of two numbers, followed by a new line.
 * @argc: Argument count/number.
 * @argv: Argument vector , array of pointers to the arguments.
 * Return: If the program receives two arguments - 0.
 *         If the program does not receive two arguments - 1.
 */

int main(int argc, char *argv[])
{
	int i, a1, a2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a1 = atoi(argv[1]);
	a2 = atoi(argv[2]);
	i = a1 * a2;

	printf("%d\n", i);

	return (0);
}
