#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: print alphabets in lower case skipping few
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'e')
		{
			continue;
		}
		else if (a == 'q')
		{
			continue;
		}
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
