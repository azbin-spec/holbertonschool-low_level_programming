#include "variadic_functions.h"

/**
 * print_char - print char
 * @args: list of args to print
 */

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - print char
 * @args: list of args to print
 */

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - print char
 * @args: list of args to print
 */

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - print char
 * @args: list of args to print
 */

void print_string(va_list args)
{
	char *a = va_arg(args, char*);

	if (a == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", a);
}

/**
 * print_all - prints a string or an int or a char based on args
 * @format: the numbers of arguments to print based on args
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *separator = "";
	int i = 0, j = 0;

	get_op var[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(args, format);

	while (format && format[i])
	{
		while (var[j].op)
		{
			if (*var[j].op == format[i])
			{
				printf("%s", separator);
				var[j].f(args);
				separator = ", ";
			}
			j++;
		}
		j = 0;
		i++;
	}
	printf("\n");

	va_end(args);
}
