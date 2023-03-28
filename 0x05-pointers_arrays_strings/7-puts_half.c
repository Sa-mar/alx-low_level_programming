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
	int second;

	for (count = 0; str[count] != '\0'; count++)
	{
	}
	index = count / 2;
	if (index < count)
	{
		for (a = index; a <= count; a++)
		{
			second[a - index] = str[a];
		}
	}
}
