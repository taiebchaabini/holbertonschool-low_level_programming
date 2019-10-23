#include "3-calc.h"

/**
* op_add - make a sum of a and b
* @a: first argument
* @b: second argument
* Return: return the sum to the first and second args
**/
int op_add(int a, int b)
{
	return (a + b);
}
/**
* op_sub - difference of a and b
* @a: first argument
* @b: second argument
* Return: return the difference from the the first and second args
**/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
* op_mul - make a product of a and b
* @a: first argument
* @b: second argument
* Return: return the product to the first and second args
**/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
* op_div - make a division of a from b
* @a: first argument
* @b: second argument
* Return: return the divison from the first / second args
**/
int op_div(int a, int b)
{
	return (a / b);
}
/**
* op_mod - make a mod to a from b
* @a: first argument
* @b: second argument
* Return: return the mod to the first from second arg
**/
int op_mod(int a, int b)
{
	return (a % b);
}
