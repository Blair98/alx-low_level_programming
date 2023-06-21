#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times followed by a new line
 */
void print_alphabet_x10(void)
{
	int i, j;
	char r;

	for (i = 0; i < 10; i++)
	{
		r = 'a';

		for (j = 0; j < 26; j++)
		{
			_putchar(r);
			r++;
		}

		_putchar('\n');
	}
}
