#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * _isalpha - Entry Point
 * @c: ASCII character for lower and upper
 *
 * Description: chesks for alphabets
 *
 * Return: Always 1 (Success)
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		if (c >= 65 && c <= 90)
		{
			return (1);
		}
		else
		{ return (0);
		}
	}
}
