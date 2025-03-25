#include "main.h"

/**
 * print_string - Affiche une chaîne de caractères
 * @args: Liste d'arguments variadiques
 *
 * Description: Affiche chaque caractère de la chaîne avec write.
 * Si la chaîne est NULL, affiche "(null)" à la place.
 *
 * Return: Nombre total de caractères affichés
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int i = 0;

	if (str == NULL)
		str = "(null)";

	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}
