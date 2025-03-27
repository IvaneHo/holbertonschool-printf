#include "main.h"

/**
 * print_int - Affiche un entier signé (format %d ou %i)
 * @args: Liste d'arguments contenant l'entier à afficher
 *
 * Récupère un entier depuis la liste d'arguments. Si l'entier est
 * négatif, affiche d'abord '-' puis travaille avec sa valeur positive.
 * Utilise print_number() pour afficher chaque chiffre.
 *
 * Return: Nombre total de caractères affichés (y compris '-' si négatif)
 */
int print_int(va_list args)
{
	int n = va_arg(args, int);
	unsigned int num;
	int count = 0;

	if (n < 0)
	{
		count += _putchar('-');
		num = -n; /* Convertit en positif */
	}
	else
	{
		num = n;
	}

	count += print_number(num);
	return (count);
}

/**
 * print_number - Affiche un entier non signé récursivement
 * @num: Nombre positif à afficher
 *
 * Divise récursivement le nombre pour afficher les chiffres
 * de gauche à droite. Utilise _putchar pour chaque chiffre.
 *
 * Return: Nombre total de caractères affichés
 */
int print_number(unsigned int num)
{
	int count = 0;

	if (num / 10)
	{
		count += print_number(num / 10); /* Appelle récursive si > 9 */
	}

	count += _putchar((num % 10) + '0'); /* Affiche le dernier chiffre */
	return (count);
}
