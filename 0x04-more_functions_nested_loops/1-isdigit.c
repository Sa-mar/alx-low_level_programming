#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * isdigit - ENtry Point
 * @c: checks for digit
 *
 * Description: checks for digits 0 to 9
 *
 * Return: Always i (Success)
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
