#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _atoi - The function
 * @s: The string pointer
 *
 * Description: a function that converts strings to int
 *
 * Return: The integer
 */
int _atoi(char *s)
{
	int i, value, result;

	value = 1;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			value = value * - 1;
		}
		else if (s[i] < 48 || s[i] > 57)
		{
			break;
		}
		else if (s[i] >= 48 || s[i] <= 57)
		{
			result = (result * 10) + (s[i] - 48);
		}
	}
	return (result * sign);
}
