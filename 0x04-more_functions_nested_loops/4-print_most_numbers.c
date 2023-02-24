#include "main.h"

/**
 *main - Check the code
 *description - Write a function that prints the numbers and by a new line
 *print_most_numbers - Print num except 2 and 4
 *@c - character
 *description - print_most_numbers
 *Return: void
 */
int main(void)
{
	void print_most_numbers(void);
{
	char c = 'c';

	for (c = '0'; c <= '9'; c++)
	{
		if (!(c == '2' || c == '4'))
			_putchar(c);
	}
	_putchar('\n');
}
}

