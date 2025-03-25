#include "main.h"

/**
 * print_int - Affiche un entier signé (%d ou %i)
 * @args: Liste d'arguments
 *
 * Return: Nombre de caractères affichés
 */
int print_int(va_list args)
{
	int n = va_arg(args, int);
	unsigned int num;
	int count = 0;

	if (n < 0)
	{
		count += _putchar('-');
		num = -n;
	}
	else
		num = n;

	count += print_number(num);
	return (count);
}

/**
 * print_number - Affiche un entier non signé (récursif)
 * @num: Nombre positif à afficher
 *
 * Return: Nombre de caractères affichés
 */
int print_number(unsigned int num)
{
	int count = 0;

	if (num / 10)
		count += print_number(num / 10);

	count += _putchar((num % 10) + '0');
	return (count);
}
