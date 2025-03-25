#include "main.h"

/**
 * print_char - Affiche un seul caractère
 * @args: Liste d'arguments variadiques
 *
 * Description: Récupère un caractère depuis les arguments
 * et l'affiche avec write.
 *
 * Return: Nombre de caractères affichés (toujours 1)
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	return (write(1, &c, 1));
}
