#include" 8-print_square.c"

/**
 * print_line - makina functions that draws a stright line in the terminal.
 * @n: how many times number of the character'_' would be printed off.
 */
void print_line(int n)

{
	char c;

	for (c = 0; c < n; c++)
		_putchar('_');
	_putchar('\n');
}
