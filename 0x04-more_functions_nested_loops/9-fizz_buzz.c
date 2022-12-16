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
			printf("Fizz ");
		}
		else
		{
			if (i % 5 == 0)
			{
				printf("Buzz ");
			}
			else
			{
				if (i % 3 == 0 && i % 5 == 0)
				{
					printf("FizzBuzz ");
				}
				else
				{
					if (i != 100)
					{
						printf(" ");
					}
					else
					{
						printf("%d", i);
					}
				}
			}
		}
	}
	printf("\n");
	return (0);
}
