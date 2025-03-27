#include <unistd.h>

/**
 * _putchar - Écrit un caractère sur stdout
 * @c: caractère à afficher
 *
 * Utilise la fonction write() pour afficher un seul caractère
 * sur la sortie standard (file descriptor 1).
 *
 * Return: 1 si succès, -1 si erreur
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
