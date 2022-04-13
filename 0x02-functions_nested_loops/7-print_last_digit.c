#include "main.h"
/**
 * print_last_digit - Prints last digit of a naumber.
 * @x: The number to considered.
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int x)
{
	int last_digit = x % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
