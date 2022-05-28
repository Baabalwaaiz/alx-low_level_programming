#include <stdio.h>
#include <main.h>

/**
 * main - Prints all arguements passed into main
 * @argc: Gives numeber of command line arguements
 * @argv: Array of written arguements in command line
 * Return: 0
 */

int main(int argc, char argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
