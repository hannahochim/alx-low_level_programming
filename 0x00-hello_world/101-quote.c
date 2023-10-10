#include <stdio.h>
#include <unistd.h>
/**
 * main - Main code contains a string that prints to stderr
 * Description: Program that prints to the standard error
 * Return: returns 1 on success
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
