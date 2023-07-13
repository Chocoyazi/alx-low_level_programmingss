#include "main.h"
#include <stdio.h>

/**
 * main - prints then number of arguements passed to the program
 * @argc: number of arguements
 * @argv: array of arguements
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
