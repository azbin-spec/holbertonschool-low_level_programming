#include "main.h"
/**
 *print_alphabet_x10 - function
 */
void print_alphabet_x10(void)
{
	int a;
	int n = 0;

	while (n < 10)
	{
		a = 97;

		for (a = 97; a < 123; a++)
			_putchar(a);
		n++;
		_putchar('\n');
	}
}
