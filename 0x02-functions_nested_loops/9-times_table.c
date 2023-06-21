#include "main.h"

/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
	int row, column, product;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0'); /* Print the first digit */

		for (column = 1; column <= 9; column++)
		{
			_putchar(',');
			_putchar(' ');

			product = row * column;

			/* Print the second digit with leading zero if necessary */
			if (product <= 9)
				_putchar(' ');

			_putchar(product / 10 + '0'); /* Print the first digit */
			_putchar(product % 10 + '0'); /* Print the second digit */
		}

		_putchar('\n');
	}
}
