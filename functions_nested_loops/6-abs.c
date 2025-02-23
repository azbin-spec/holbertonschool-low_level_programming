#include "main.h"
/**
 *_abs - function
 *@a: int
 *Return: 0 on sucess
 */
int _abs(int a)
{
	if (a < 0)
	{
		a = (-1) * a;
		return (a);
	}

	else
	{
		a = (1) * a;
		return (a);
	}
}
