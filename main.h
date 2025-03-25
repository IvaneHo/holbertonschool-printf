#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/* Fonctions principales */
int _printf(const char *format, ...);
int handle_format(const char *format, va_list args, int i, int *count);

/* Fonctions d'affichage */
int print_char(va_list args);
int print_string(va_list args);
int print_percent(void);

#endif /* MAIN_H */
