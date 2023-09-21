#include <stdio.h>

/**
 * pre_main - function executed before main
 * Return: no return.
 */

void __attribute__ ((constructor)) pre_main()
{
	printf("You're love! and yet, you must loved");
	printf(",\nI bare my fruit upon my hand!\n");
}
