#include "main.h"

/**
 * print_int - Prints a signed integer in decimal format (%d or %i)
 * @args: List of arguments containing the integer to print
 *
 * Return: Number of characters printed (including the '-' sign if applicable)
 */
int print_int(va_list args)
{
	int n = va_arg(args, int);
	unsigned int num;
	int count = 0;

	if (n < 0)
	{
		count += _putchar('-');
		num = -n;
	}
	else
		num = n;

	count += print_number(num);
	return (count);
}

/**
 * print_number - Prints an unsigned integer using recursion
 * @num: The positive number  to print
 *
 * Return: The number of characters printed
 */
int print_number(unsigned int num)
{
	int count = 0;

	if (num / 10)
		count += print_number(num / 10);

	count += _putchar((num % 10) + '0');
	return (count);
}
