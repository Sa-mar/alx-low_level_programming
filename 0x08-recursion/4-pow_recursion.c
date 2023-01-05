#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - The function
 * @x: the value
 * @y: the power value
 *
 * Description: A function that computes power of a number
 *
 * Return: the value or -1 if power < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		return (_pow_recursion(x, y - 1) * x);
	}
}
