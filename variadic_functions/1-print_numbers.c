#include "variadic_functions.h"
/**
 *print_numbers - print the numbers in args n
 *@n: numbers of args
 *@separator: the string to print in beetween numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);

		if (!separator)
			printf("%d", num);

		else if (separator && i == 0)
			printf("%d", num);

		else
			printf("%s%d", separator, num);
	}

	printf("\n");

	va_end(args);
}
