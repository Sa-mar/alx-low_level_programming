#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * puts_half - The function
 * @str: The string pointer
 *
 * Description: A function that prints half of string
 *
 * Return: Void
 */
void puts_half(char *str)
{
	int a;
	int count;
	int index;

	for (count = 0; str[count] != '\0'; count++)
	{
	}
	if ((count % 2) == 0)
	{
		a = count / 2;
	}
	else
	{
		a = (count - 1) / 2;
	}

	for (index = a; index < count; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
