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
	if (n < 1)
	{
		return (-1);
	}

	else if (n <= 1 && n >= 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
