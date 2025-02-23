#include <stdio.h>
/**
 *main - entry point
 *Return: 0 on sucess
 */
int main(void)
{
	int a;
	int b;

	for (a = 97; a < 123; a++)
		putchar(a);
	for (b = 65; b < 91; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
