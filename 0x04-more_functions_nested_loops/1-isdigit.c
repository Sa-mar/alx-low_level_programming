#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * _isdigit - Entry Point
 * @c: checks for digit
 *
 * Description: checks for digits 0 to 9
 *
 * Return: Always 1 (Success)
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
