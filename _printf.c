#include "main.h"
/**
 * print_format - Gère l'affichage des formats spéciaux (%c, %s, %%)
 * @format: Format à vérifier
 * @args: Liste des arguments
 *
 * Return: Nombre de caractères imprimés
 */
int print_format(char format, va_list args)
{
	int count = 0;
	char *str;

	if (format == 'c')
	{	char c = va_arg(args, int);
		write(1, &c, 1);
		count++;
	}
	else if (format == 's')
	{
		str = va_arg(args, char *);
		if (str == NULL)
			str = "(null)";
		while (*str)
		{	write(1, str, 1);
			str++;
			count++;
		}
	}
	else if (format == '%')
	{	write(1, "%", 1);
		count++;
	}
	else
	{	write(1, "%", 1);
		write(1, &format, 1);
		count += 2;
	}
	return (count);
}
