#include "main.h"
/**
 * print_most_numbers - this printing numbers
 *
 * Return:  if digit otherwise 0
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2')
		{
			if (i != '4')
			{

				_putchar(i);
			}
		}
	}
	_putchar('\n');
}
