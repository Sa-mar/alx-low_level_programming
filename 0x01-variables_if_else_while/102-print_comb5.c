#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: prints all possible comb of 2 2-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 48; a <= 54; a++)
	{
		for (b = a + 1; b <= 55; b++)
		{
			for (c = b + 1; c <= 56; c++)
			{
				for (d = c + 1; d <= 57; d++)
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);

					if (a < 54 || b < 55 || c < 56 || d < 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
