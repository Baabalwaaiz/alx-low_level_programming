#include <stdio>
#include "main.h"

/**
 * main - prints name of program
 * @argc: arguement counter
 * @argv: pointer to array of arguements
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
