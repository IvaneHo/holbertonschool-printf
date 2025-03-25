# holbertonschool-printf

## 📌 Description

Ce projet consiste à recréer une version simplifiée de la fonction `printf` de la bibliothèque standard C.  
Il s'agit d'un exercice fondamental permettant de comprendre :

- le traitement des arguments variadiques (`va_list`, `va_start`, etc.)
- la gestion de chaînes de format
- l'affichage caractère par caractère à l'aide de `write`
- l'organisation d'un projet C structuré et conforme aux normes Holberton

---

## ✅ Fonction principale

```c
int _printf(const char *format, ...);

🧩 Spécificateurs actuellement pris en charge
Format	Description
%c	Affiche un caractère
%s	Affiche une chaîne
%%	Affiche le caractère %
%d	Affiche un entier signé
%i	Identique à %d
⚙️ Compilation

Tous les fichiers sont compilés avec :

gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c test/main.c -o printf

⚠️ Aucun fichier contenant un main() ne doit être présent à la racine du projet.
📂 Organisation

holbertonschool-printf/
├── _printf.c       → Fonction principale + gestion des formats
├── print_int.c     → Affichage de %d / %i
├── _putchar.c      → Wrapper autour de write
├── main.h          → Prototypes + include guards
└── test/
    └── main.c      → Fichiers de test (non notés)

💡 Exemples d’utilisation

_printf("Hello %s!\n", "world");       // Affiche "Hello world!"
_printf("Value: %d\n", 42);            // Affiche "Value: 42"
_printf("Percent: %%\n");              // Affiche "Percent: %"

![FlowChart](https://github.com/user-attachments/assets/ef867758-8afc-4bf7-a53c-ed632fc857cc)
printf est une fonction en C utilisée pour afficher du texte ou des valeurs formatées sur la sortie standard (généralement l'écran).
non abouti