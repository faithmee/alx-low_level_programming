#include "main.h"
#include <stdio.h>
/**
 *_putchar - Writes the character c to sdtout
 *@c: The character to print
 *
 *Return: On success 1.
 *On error:-1 is returned  and errno is set apprpriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
