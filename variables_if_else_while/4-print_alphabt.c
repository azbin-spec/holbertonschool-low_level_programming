#include <stdio.h>
/**
 *main - entry point
 *Return: 0 on sucess
 */
int main(void)
{
	int a;

	for (a = 97; a < 123; a++)
	{
		if (a == 113)
			a++;
		if (a == 101)
			a++;

		putchar(a);
	}
	putchar('\n');
	return (0);
}
