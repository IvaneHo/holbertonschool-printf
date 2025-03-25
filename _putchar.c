#include <unistd.h>

/**
 * _putchar - Écrit un caractère sur stdout
 * @c: caractère à afficher
 *
 * Return: 1 si succès, -1 si erreur
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
