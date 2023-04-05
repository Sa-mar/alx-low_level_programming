#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * factorial - The function
 * @n: The integer
 *
 * Description: return factorial of a given number
 *
 * Return: the factorial
 */
int factorial(int n)
{
	if (n < 1)
	{
		return (0);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
