#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - The function
 * @s: The string
 *
 * Description: A function that returns lengh of string
 *
 * Return: The string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s +1));
	}
	else
	{
		return (0);
	}
}
