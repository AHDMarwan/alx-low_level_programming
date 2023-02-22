#include "main.h"
char _putchar(void)
{
	char *var = "_putchar";

	while (*var)
	{
		_putchar(*var);
		var++;
	}
	_putchar('\n');

	return (0);
}
