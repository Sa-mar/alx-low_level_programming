#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _abs - The prototype
 * @n: The number
 *
 * Description: a function that computes the absolute value of an integer
 *
 * Return: Always o
 */
int _abs(int n)
{
	if (n == 0)
	{
		return (n);
	}
	else if (n > 0)
	{
		return (n);
	}
	else
	{
		int below;

		below = n * -1;
		return (below);
	}
}
