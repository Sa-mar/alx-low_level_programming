#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * _islower - Entry Point
 * @c: ASCII values of lower case
 *
 * Description: checks if alphabets are in lower case
 *
 * Return: Always 1 (Success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
