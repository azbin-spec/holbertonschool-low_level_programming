#include <stdio.h>
/**
 *main - entry point
 *Return: 0 on sucess
 */
int main(void)
{
	int a;
	int b;

	for (a = 48; a < 58; a++)
		putchar(a);
	for (b = 97; b < 103; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
