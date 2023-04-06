#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - The function
 * @x: The base
 * @y: The power
 *
 * Description: computes x power y
 *
 * Return: the result
 */
int _pow_recursion(int x, int y)
{
	if (y < 1)
	{
		return (-1);
	}

	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
