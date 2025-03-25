#include "main.h"

/**
 * handle_format - Gère les formats %c, %s et %%
 * @format: Chaîne de format
 * @args: Liste d'arguments variadiques
 * @i: Index actuel dans la chaîne
 * @count: Pointeur vers le compteur de caractères affichés
 *
 * Description: Détecte le type de format (c, s, %) et appelle la bonne
 * fonction d'affichage. Si le format n'est pas reconnu, affiche % suivi
 * du caractère inconnu.
 *
 * Return: Le nouvel index à utiliser dans _printf
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
		write(1, "%", 1);
		write(1, &format[i + 1], 1);
		*count += 2;
	}
	return (i + 1);
}
