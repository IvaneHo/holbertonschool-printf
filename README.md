# <p align="center">![holbertonschool_printf_animation_fixed](https://github.com/user-attachments/assets/71e04e52-d6e6-49bc-9fe3-87ac1a400223)</p> 
                             
## 📌 Description

Ce projet consiste à recréer une version simplifiée de la fonction `printf` de la bibliothèque standard C.  
Il s'agit d'un exercice fondamental permettant de comprendre :

- le traitement des arguments variadiques (`va_list`, `va_start`, etc.)
- la gestion de chaînes de format
- l'affichage caractère par caractère à l'aide de `write`
- l'organisation d'un projet C structuré et conforme au style Betty

---

## ✅ Fonction principale

```c
int _printf(const char *format, ...);

🧩 Spécificateurs actuellement pris en charge

Formats pris en charge :
- `%c` : Affiche un caractère
- `%s` : Affiche une chaîne de caractères
- `%%` : Affiche le caractère %
- `%d`, `%i` : Affiche les entiers signés
⚙️ Compilation

Tous les fichiers sont compilés avec :

gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c test/main.c -o printf

⚠️ Aucun fichier contenant un main() ne doit être présent à la racine du projet.

🙃​ Exemples d’utilisation

_printf("Hello %s!\n", "world");       // Affiche "Hello world!"
_printf("Value: %d\n", 42);            // Affiche "Value: 42"
_printf("Percent: %%\n");              // Affiche "Percent: %"
```

---

## 💻 Environnement / Requirements

- Ubuntu 20.04 LTS
- GCC 9+
- `valgrind` (pour les tests mémoire)
- Aucun printf autorisé dans les fichiers sources
- Respect du style **Betty**
- Pas de variables globales

---


## 📖 Man Page

Une documentation de type `man` est disponible :

- Fichier : `man_3_printf`

Pour l’afficher dans le terminal :

```bash
man ./man_3_printf
```




---

## 🧪 Tests & Vérifications

Un fichier `main.c` dans `test/` compare `_printf()` avec `printf()` pour :
- vérifier le contenu affiché
- comparer la valeur de retour
- tester tous les cas limites (`NULL`, `%` seul, etc.)

### ✅ Valgrind

Pour tester les **fuites mémoire** :

```bash
valgrind ./printf
```

✅ Aucun `malloc` n’est utilisé → aucune fuite mémoire si tout est propre.

---




![FlowChartFinal](https://github.com/user-attachments/assets/87c9d0ce-5b70-45b4-8723-ad14e563e9a9)



---

## 👨‍💻 Auteurs

<p align="center">- Arnaud Lanoizele - Ivane Bagashvili — Projet PRINTF Holberton School — Mars 2025</p>

---
