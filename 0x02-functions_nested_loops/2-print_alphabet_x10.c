#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times followed by a new line
 */
void print_alphabet_x10(void)
{
	int i;
	char r;

	for (i = 0; i < 10; i++)
	{
		r = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			r++;
		}

		_putchar('\n');
	}
}
