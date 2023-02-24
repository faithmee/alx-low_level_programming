#include "main.h"
/**
  *print_line - Draws a straight line according to parameter
  *@n: The number of lines to draw
  *Return: \n new line
  */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1;i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
