#include "main.h"

/**
 * _printf - Fonction qui reproduit une version simplifiée de printf
 * @format: Chaîne de caractères à imprimer (peut contenir des formats)
 *
 * Return: Nombre de caractères affichés (comme printf)
 */
int _printf(const char *format, ...)
{
	va_list args;         /* Pour récupérer les arguments variables */
	int i = 0;            /* Index pour parcourir la chaîne format */
	int count = 0;        /* Compteur de caractères imprimés */
	char *str;            /* Pour stocker les chaînes à imprimer */

	if (format == NULL)   /* Vérifie si la chaîne est valide */
		return (-1);

	va_start(args, format); /* Initialise les arguments variables */

	
}
