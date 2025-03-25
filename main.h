#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/* Fonction principale */
int _printf(const char *format, ...);

/* Fonction pour gérer chaque format */
int handle_format(const char *format, va_list args, int i, int *count);

/* Fonctions pour afficher différents types */
int print_char(va_list args);
int print_string(va_list args);
int print_percent(void);

/* Fonction utilitaire */
int _putchar(char c);

#endif /* MAIN_H */
