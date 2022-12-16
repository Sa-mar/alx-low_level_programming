#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry Point
 *
 * Description: the fizz buzz challenge
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; ++1)
	{
		if (i % 3 == 0)
		{
			putchar('Fizz ');
		}
		else
		{
			if (i % 5 == 0)
			{
				putchar('Buzz ');
			}
			else
			{
				if (i % 3 == 0 && i % 5 == 0)
				{
					putchar('FizzBuzz ');
				}
				else
				{
					if (i != 100)
					{
						putchar(' ');
					}
					else
					{
						putchar('%d', i);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
