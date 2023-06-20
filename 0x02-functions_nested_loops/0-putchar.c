#include "main.h"

/**
 * main - Entry point
 *
 * Description: Prints "_putchar" followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "_putchar\n";
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	return (0);
}

/**
 * _putchar - Writes a character to the standard output (stdout)
 *
 * @c: The character to be written
 *
 * Return: On success, returns the character written.
 * On error, returns -1 and sets errno.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
