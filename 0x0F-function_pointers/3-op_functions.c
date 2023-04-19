#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * op_add - calculate the sum of two integers
 * @a: the first number
 * @b: the second number
 *
 * Return: the integers sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculate the difference between two integers
 * @a: the first number
 * @b: the second number
 *
 * Return: the integers difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculate the product of two integers
 * @a: the first number
 * @b: the second number
 *
 * Return: the integers product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculate the quotient of two integers
 * @a: the first number
 * @b: the second number
 *
 * Return: the integers quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculate the remainder of the division of two integers
 * @a: the first number
 * @b: the second number
 *
 * Return: the remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}

