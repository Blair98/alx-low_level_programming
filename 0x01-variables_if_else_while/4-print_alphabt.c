#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char t;

	for (t = 'a'; t <= 'z'; t++)
	{
		if (t != 'q' && t != 'e')
			putchar(t);
	}

	putchar('\n');
	return (0);
}
