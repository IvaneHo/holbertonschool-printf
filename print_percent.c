#include "main.h"

/**
 * print_percent - Affiche le symbole %
 *
 * Description: Utilisé pour gérer le cas %% dans la chaîne.
 *
 * Return: 1 (car un seul caractère est affiché)
 */
int print_percent(void)
{
	return (write(1, "%", 1));
}
