#include "main.h"

/**
 * print_line - makina functions that draws a stright line in the terminal.
 * @n: how many times number of the character'_' would be printed of
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (n > 0)
	{
		_putchar('_');
		n--;
	}

	_putchar('\n');
}
