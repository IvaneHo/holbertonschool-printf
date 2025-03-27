#include "../main.h"
#include <limits.h>
#include <stdio.h>

/**
 * main - Tests complets de la fonction _printf
 *
 * Return: Always 0
 */
 int main(void)
 {
	 int len, len2;
	 char *name = "Betty";
	 int age = 10;
 
	 /* Phrase complète avec %s et %d */
	 _printf("Bonjour %s, tu as %d ans aujourd'hui !\n", name, age);
	 printf("Bonjour %s, tu as %d ans aujourd'hui !\n", name, age);
 
	 /* Affichage d'un score */
	 _printf("Score final: %d/%d\n", 18, 20);
	 printf("Score final: %d/%d\n", 18, 20);
 
	 /* Affichage avec un caractère spécial */
	 _printf("Lettre préférée: %c\n", 'Z');
	 printf("Lettre préférée: %c\n", 'Z');
 
	 /* Chaîne vide */
	 _printf("Message vide: [%s]\n", "");
	 printf("Message vide: [%s]\n", "");
 
	 /* Phrase avec un pourcentage */
	 _printf("Téléchargement terminé à 100%% !\n");
	 printf("Téléchargement terminé à 100%% !\n");
 
	 /* Tests limites INT_MAX / INT_MIN */
	 _printf("Valeur max: %d | Valeur min: %d\n", INT_MAX, INT_MIN);
	 printf("Valeur max: %d | Valeur min: %d\n", INT_MAX, INT_MIN);
 
	 /* NULL string */
	 _printf("Nom: %s\n", NULL);
	 printf("Nom: %s\n", NULL);
 
	 /* Affichage de plusieurs types à la suite */
	 _printf("Nom: %s, Age: %d, Initiale: %c, %% affiché\n", name, age, name[0]);
	 printf("Nom: %s, Age: %d, Initiale: %c, %% affiché\n", name, age, name[0]);
 
	 /* Format inconnu */
	 _printf("Test format inconnu : [%r]\n");
	 printf("Test format inconnu : [%r]\n");
 
	 /* Format erroné (pourcentage seul) */
	 _printf("Cas spécial : [%]\n");
	 printf("Cas spécial : [%]\n");
 
	 /* Longueur retour test */
	 len = _printf("Hello %s !\n", "Holberton");
	 len2 = printf("Hello %s !\n", "Holberton");
	 printf("Longueur renvoyée par _printf : %d\n", len);
	 printf("Longueur renvoyée par printf   : %d\n", len2);
 
	 return (0);
 }