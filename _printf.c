#include "main.h"

/**
 * print_char - Affiche un caractère (format %c)
 * @args: Liste d'arguments contenant le caractère à afficher
 *
 * Cette fonction récupère un entier promu (char -> int) depuis la liste
 * d'arguments, puis l'affiche via _putchar().
 *
 * Return: Toujours 1 (car 1 seul caractère est affiché)
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}

/**
 * print_string - Affiche une chaîne de caractères (format %s)
 * @args: Liste d'arguments contenant la chaîne à afficher
 *
 * Si la chaîne est NULL, affiche "(null)".
 * Parcourt chaque caractère de la chaîne et l'affiche avec _putchar().
 *
 * Return: Le nombre total de caractères affichés
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
 * print_percent - Affiche simplement un '%'
 *
 * Utilisé quand on rencontre "%%" dans la chaîne de format.
 *
 * Return: Toujours 1
 */
int print_percent(void)
{
	return (_putchar('%'));
}

/**
 * handle_format - Gère les directives de format (à partir du caractère '%')
 * @format: Chaîne contenant le format complet
 * @args: Liste d'arguments à lire (va_list)
 * @i: Position actuelle dans la chaîne
 * @count: Pointeur vers le compteur total de caractères affichés
 *
 * Détecte le caractère suivant après '%' et appelle la fonction appropriée
 * selon que ce soit 'c', 's', '%', 'd', 'i', ou caractère inconnu.
 *
 * Return: La nouvelle position à utiliser dans la boucle principale (_printf)
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
		/* Si le caractère après % est inconnu, afficher % + le caractère */
		_putchar('%');
		_putchar(format[i + 1]);
		*count += 2;
	}
	return (i + 1);
}

/**
 * _printf - Fonction principale réimplémentant printf
 * @format: Chaîne de format contenant texte et directives (%...)
 *
 * Gère les arguments variables, appelle les fonctions selon les formats
 * (%c, %s, %%, %d, %i), et affiche le résultat caractère par caractère.
 * Utilise une boucle sur chaque caractère de la chaîne de format.
 * Si un pourcentage est détecté, appelle handle_format().
 *
 * Return: Nombre total de caractères affichés, ou -1 en cas d'erreur
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
