#include "../main.h"
#include <stdio.h> /* pour comparer avec printf */
#include <limits.h>

int main(void)
{
	int len1, len2;

	len1 = _printf("Hello %s ! Il fait %c aujourd'hui %%.\n", "toi", 'b');
	len2 = printf("Hello %s ! Il fait %c aujourd'hui %%.\n", "toi", 'b');

	_printf("Longueur (custom): %d\n", len1);
	printf("Longueur (printf): %d\n", len2);

	return (0);
}
