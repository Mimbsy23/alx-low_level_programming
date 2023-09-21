#include <stdio.h>

/**
 * pre_main - a function imprinted before main
 * Return: no return.
 */

void __attribute__ ((constructor)) pre_main()
{
	printf("mbiniya my treasure! beautiful yet, you are so simple");
	printf(",\nI love you endlessly!\n");
}
