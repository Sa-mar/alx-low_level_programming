#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _isalpha - The function
 * @c: the int to check for
 *
 * Description: function that checks for alphabetic character
 *
 * Return: 1 for alphabet 0 for other
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90 && c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
