#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/*
 * _printf - Fonction principale qui gère les formats %c, %s, %%, %d, %i
 * handle_format - Traite les directives de format à partir de '%'
 */
int _printf(const char *format, ...);
int handle_format(const char *format, va_list args, int i, int *count);

/*
 * Fonctions d'affichage correspondant aux spécificateurs de format :
 * - print_char : affiche un caractère
 * - print_string : affiche une chaîne de caractères
 * - print_percent : affiche le symbole '%'
 * - print_int : affiche un entier signé (positif ou négatif)
 * - print_number : affiche un entier non signé (utilisé par print_int)
 */
int print_char(va_list args);
int print_string(va_list args);
int print_percent(void);
int print_int(va_list args);
int print_number(unsigned int num);

/*
 * _putchar - Fonction utilitaire pour écrire un seul caractère sur stdout
 */
int _putchar(char c);

#endif /* MAIN_H */
