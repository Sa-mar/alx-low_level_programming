#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * add - The Prototype
 *
 * Description: Adding two integers
 *
 * Return: Return the results
 */
int add(int a, int b)
{
	sum = a + b;

	if (sum >= 10)
	{
		_putchar((sum / 10) + '0');
		_putchar((sum % 10) + '0');
		return (sum);
	}
	else
	{
		_putchar(sum + '0');
		return (sum);
	}
}
