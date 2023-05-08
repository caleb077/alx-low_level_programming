#include "main.h"

/**
  * main - does nothing
  * @argc: n arguments
  * @argv: arguments of command line
  * Return: void
  */
int main(int argc, char *argv[])
{
	printf("argc:%d, argv:%p\n", argc, (void *)*argv);
	return (1);
}
