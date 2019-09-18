#include <stdio.h>
#include <unistd.h>

/**
  * main - Program to print string with Write (C System Call)
  * Return: 1 returns the value 1 from the current function
  */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
