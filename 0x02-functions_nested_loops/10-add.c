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
	int sum;
	
	sum = a + b;
	if (sum >= 10)
	{
		return ((sum / 10) + '0');
		return ((sum % 10) + '0');
	}
	else
	{
		return (sum + '0');
	}
}
