#include "main.h"
/**
  *print_number - Prints the numbers since 0 to 9
  *Return: Void
  */
void print_numbers(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}

