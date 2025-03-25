#include "main.h"

/**
 * print_char - Affiche un caractère
 * @args: liste d'arguments
 *
 * Return: 1
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}

/**
 * print_string - Affiche une chaîne de caractères
 * @args: liste d'arguments
 *
 * Return: nombre de caractères affichés
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
 * print_percent - Affiche le caractère '%'
 *
 * Return: 1
 */
int print_percent(void)
{
	return (_putchar('%'));
}

/**
 * handle_format - Gère %c, %s et %%
 * @format: chaîne de format
 * @args: liste d'arguments
 * @i: index actuel dans la chaîne
 * @count: pointeur vers compteur total
 *
 * Return: nouvel index après traitement
 */
int handle_format(const char *format, va_list args, int i, int *count)
{
	if (format[i + 1] == 'c')
		*count += print_char(args);
	else if (format[i + 1] == 's')
		*count += print_string(args);
	else if (format[i + 1] == '%')
		*count += print_percent();
	else
	{
		_putchar('%');
		_putchar(format[i + 1]);
		*count += 2;
	}
	return (i + 1);
}

/**
 * _printf - Affiche une chaîne avec formats %c, %s, %%
 * @format: chaîne à afficher
 *
 * Return: nombre de caractères affichés
 */
int _printf(const char *format, ...)
{
	va_list args; /* Liste d'arguments variadiques */
	int i = 0; /* Index pour parcourir la chaîne */
	int count = 0; /* Compteur de caractères affichés */

	if (format == NULL)
		return (-1); /* Cas où la chaîne est nulle */

	va_start(args, format); /* Initialisation des arguments */

	/* Boucle sur chaque caractère de la chaîne */
	while (format[i])
	{
		/* Si on rencontre un %, on regarde le caractère suivant */
		if (format[i] == '%' && format[i + 1])
			i = handle_format(format, args, i, &count);
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
