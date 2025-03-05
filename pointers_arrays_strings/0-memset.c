#include "main.h"
#include <stdio.h>

/**
 * _memset - idk
 * @s: idk
 * @b: idk
 * @n: idk
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		if (s[i] != '\0')
			i++;
		else
			break;
	}

	return (s);
}
