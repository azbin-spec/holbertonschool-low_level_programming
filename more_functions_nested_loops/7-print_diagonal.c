#include "main.h"
/**
 *print_diagonal - function
 *@n: int
 */
void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
		_putchar('\n');
	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
			_putchar(' ');

		_putchar(92);
		_putchar('\n');
	}
}
