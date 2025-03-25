#include "../main.h"
#include <stdio.h>

int main(void)
{
	int len1, len2;

	len1 = _printf("Char: %c | String: %s | Percent: %%\n", 'H', "Hello");
	len2 = printf("Char: %c | String: %s | Percent: %%\n", 'H', "Hello");

	_printf("Len _printf: %d\n", len1);
	printf("Len printf: %d\n", len2);

	_printf("Test %%d: %d | %%i: %i\n", 123, -456);
	_printf("Just %% at end: ");
	_printf("%"); /* Should return -1 */

	return (0);
}
