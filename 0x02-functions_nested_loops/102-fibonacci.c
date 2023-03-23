#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *        fib's next no. is addition of last two numbers.
 *
 * Return: 0 if succesful
 */
int main(void)
{
	int i;
    unsigned long j = 1;
    unsigned long final = 1;
    unsigned long  next = 1;

    for (i = 1; i <= 50; i++)
    {
       printf("%lu", final);
       final = next + j; 
       next = j;
       j = final;

       if(i == 50)
       
        printf("\n");
       
       else
       
        printf(", ");

       
        
    }
	printf("\n");
	return (0);
}
