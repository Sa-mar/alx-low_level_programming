#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * _abs - Entry Point
 * @i: The integer
 *
 * Description: computes absolute value
 *
 * Return: Absolute value
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (-i);
	}
}
