#include "main.h"
#include <stdio.h>
/**
 *main - entry point
 *Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz ");
		if ((i % 3 == 0) && (i % 5 != 0))
			printf("Fizz ");
		if (i % 5 == 0 && i % 3 != 0 && i != 100)
			printf("Buzz ");
		if ((i % 3 != 0) && (i % 5 != 0))
			printf("%d ", i);
		if (i == 100 && (i % 5 == 0))
			printf("Buzz");
	}
	printf("\n");
	return (0);
}
