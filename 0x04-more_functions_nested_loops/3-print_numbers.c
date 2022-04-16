#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9 followed by a new line.
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
