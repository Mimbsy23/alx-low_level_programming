#include <stdio.h>

/**
 * pre_main - a function imprinted before main
 * Return: no return.
 */

void __attribute__ ((constructor)) pre_main()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
