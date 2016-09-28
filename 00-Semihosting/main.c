#include <stdint.h>
#include "semi.h"

void main(void)
{
	char message[] = "Hello World!\n";
	write(1, message, sizeof(message));
	while (1);
}
