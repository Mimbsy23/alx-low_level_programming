#include "3-calc.h"

/**
 * op_add - returns the sum of p and q.
 * @p: First integer
 * @q: Second integer
 *
 * Return: Sum of p and q.
 */
int op_add(int p, int q)
{
	return (p + q);
}

/**
 * op_sub - returns the difference of p and q.
 * @p: First integer
 * @q: Second integer
 *
 * Return: Difference of p and q.
 */
int op_sub(int p, int q)
{
	return (p - q);
}

/**
 * op_mul - returns the product of p and q.
 * @p: First integer
 * @q: Second integer
 *
 * Return: Product of p and q.
 */
int op_mul(int p, int q)
{
	return (p * q);
}

/**
 * op_div - returns the result of the division of p by q.
 * @p: First integer
 * @q: Second integer
 *
 * Return: Result of p divided by q.
 */
int op_div(int p, int q)
{
	if (q == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (p / q);
}

/**
 * op_mod - returns the remainder of the division of p by q.
 * @p: First integer
 * @q: Second integer
 *
 * Return: Remainder of p divided by q.
 */
int op_mod(int p, int q)
{
	if (q == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (p % q);
}
