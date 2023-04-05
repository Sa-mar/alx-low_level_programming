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
	static int lenght = 0;

	if (*s == '\0')
	{
		return (lenght);
	}
	else
	{
		lenght++;
		_strlen_recursion(s + 1);
	}
}
