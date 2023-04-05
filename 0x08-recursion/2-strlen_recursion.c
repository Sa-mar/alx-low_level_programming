#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - The function
 * @s: The string
 *
 * Description: A function that returns lenght of string
 *
 * Return: The string lenght
 */
int _strlen_recursion(char *s)
{
	int lenght = 1;

	if (*s != '\0')
	{
		return (lenght + _strlen_recursion( s + 1));
	}
	else
	{
		return (0);
	}
}
