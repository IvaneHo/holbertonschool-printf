#include "main.h"

/**
 * print_char - Prints a single char
 * @args: A list of arguments containing the character to print
 *
 * Return: Always returns 1
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}

/**
 * print_string - Prints a string to standard output
 * @args: A list of arguments containing the string to print
 *
 * Return: The number of characters printed
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int i = 0;

	if (str == NULL)
		str = "(null)";
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}

/**
 * print_percent - Prints the '%' character 
 *
 * Return: Always return 1
 */
int print_percent(void)
{
	return (_putchar('%'));
}

/**
 * handle_format - handles format specifiers %c, %s, %, %d, %i
 * @format: The format string containing directive
 * @args: The list arguments to process
 * @i: The current position in the format string
 * @count: A pointer to the total character count printed
 *
 * Return: The updated position in the format string
 */
int handle_format(const char *format, va_list args, int i, int *count)
{
	if (format[i + 1] == 'c')
		*count += print_char(args);
	else if (format[i + 1] == 's')
		*count += print_string(args);
	else if (format[i + 1] == '%')
		*count += print_percent();
	else if (format[i + 1] == 'd' || format[i + 1] == 'i')
		*count += print_int(args);
	else
	{
		_putchar('%');
		_putchar(format[i + 1]);
		*count += 2;
	}
	return (i + 1);
}

/**
 * _printf - Prints a formatted string
 * @format: A string containing text and format specifiers
 *
 * Return: The total of characters printed, or -1 on error
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				va_end(args);
				return (-1);
			}
			i = handle_format(format, args, i, &count);
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
