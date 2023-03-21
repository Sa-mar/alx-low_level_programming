#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _islower - The function
 * c: character
 *
 * Description: A function that check lower case
 *
 * Return: 1 for lower and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		_putchar(49 + '0');
	}
	else
	{
		_putchar(48 + '0');
	}
	return (0);
}
