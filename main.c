#include "monty.h"
#include "lists.h"

/**
 * monty - interpreter
 * @args: args
 */

void monty(args_t *args)
{
	size_t len = 0;
	int get = 0;

	if (args->ac != 2)
	{
		dprintf("Error: Can't open file");
		exit(EXIT_FAILURE);
	}

}

/**
 * main - the main function
 * @argc: argc
 * @argv: argv
 * Return: EXIT_SUCCESS
 */

int main(int argc, char *argv[])
{
	args_T = args;

	args.av = argv[1]
	args.ac = argc;
	args.lin_number = 0;
	monty(args);

	return (EXIT_SUCCESS);
}
