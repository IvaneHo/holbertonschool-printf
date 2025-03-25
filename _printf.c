#include "main.h"
/**
 * _printf - Simule le comportement de la fonction printf (version simplifiée)
 * @format: Chaîne à afficher contenant du texte et des formats
 *
 * Description: Cette fonction prend une chaîne de format et affiche chaque
 * caractère un à un. Si elle détecte un %, elle appelle une fonction pour
 * gérer le cas (%c, %s ou %%). Elle utilise write pour afficher à l'écran.
 *
 * Return: Nombre total de caractères affichés
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
		{
			i++;
			if (format[i] == 'c')
			{
				char c = va_arg(args, int);
				write(1, &c, 1);
				count++;
			}
			else if (format[i] == 's')
			{
				str = va_arg(args, char *);
				if (!str)
					str = "(null)";
				while (*str)
				{
					write(1, str, 1);
					str++;
					count++;
				}
			}
			else if (format[i] == '%')
			{
				write(1, "%", 1);
				count++;
			}
			else
			{
				write(1, "%", 1);
				write(1, &format[i], 1);
				count += 2;
			}
		}
		else
		{
			/* Sinon, on imprime le caractère normalement */
			write(1, &format[i], 1);
			count++;
		}
		i++; /* On passe au caractère suivant */
	}

	va_end(args); /* Nettoyage de la liste d'arguments */

	return (count); /* Retourne le total des caractères affichés */
}
