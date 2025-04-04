#include "variadic_functions.h"
/**
 *print_strings - function that prints strings
 *@separator: string to print in beetween
 *@n: numbers of args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *ptr;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		ptr = va_arg(args, char*);
		if (i == 0)
			printf("%s", ptr == NULL ? "(nil)" : ptr);
		else
			printf("%s%s", (separator ? separator : ""), ptr == NULL ? "(nil)" : ptr);
	}
	printf("\n");
	va_end(args);
}
