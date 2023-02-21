#include <unistd.h>

/**
 * _putchar
 */

int _putcher(char c)
{
	return (write(1, &c, 1));
}
