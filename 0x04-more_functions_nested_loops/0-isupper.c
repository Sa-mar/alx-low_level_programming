#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * _isupper - Entry Point
 * @c: to check case
 *
 * Description: check for upper case characters
 *
 * Return: Always 1 (Success)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
