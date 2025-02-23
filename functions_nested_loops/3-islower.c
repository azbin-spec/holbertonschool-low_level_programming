#include "main.h"
/**
 *_islower - function
 *@c: int
 *Return: 0 on sucess else 1.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
