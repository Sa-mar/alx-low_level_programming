#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * factorial - The factorial function
 * @n: The number
 *
 * Description: A function that returns factorial of a number
 *
 * Return: the number or -1 when error
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n >= 1)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		return (-1);
	}
}
