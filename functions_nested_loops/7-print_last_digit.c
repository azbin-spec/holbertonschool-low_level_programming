#include "main.h"
/**
 *print_last_digit - function
 *@n: int
 *Return: 0 on sucess
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
	{
		n = -n;
	}

	a = n % 10;

	if (a < 0)
	{
		a = -a;
	}
	_putchar('0' + a);

	return (a);
}
