#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _isupper - The function
 * @c: The character
 *
 * Description: function that checks for upper character
 *
 * Return: 1 if upper otherwise 0
 */
int _isupper(int c)
{
	if (c >= 65 && c<= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
