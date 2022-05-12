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
		write(STDERR_FILENO, USAGE, 5)
		exit(EXIT_FAILURE);
	}

}

/**
 * main - the main function
 * @argc: argc
 * @argv: argv
 * Return: EXIT_SUCCESS
 */
/**
int main(int argc, char *argv[])
{
	args_ti = args;

	args.av = argv[1]
	args.ac = argc;
	args.lin_number = 0;
	monty(args);

	return (EXIT_SUCCESS);
}
*/
/**
 * main - the main function
 * @argc: argc
 * @argv: argv
 * Return: EXIT_SUCCESS
 */
int main(int argc, char *argv[])
{
	size_t len = 0;
	int get = 0;
	int count = 0;
	char *argu = NULL;
	int final = 0;
	stack_t *stack = NULL;
	/**
	 * esta es una variable global que esta en monty.h
	 * el fopen es para abrir un archivo, la r es para que solo se
	 * leer el archivo
	 */
	far.fd = fopen(argv[1], "r");

	if (argc == 2)
	{
		while(getline(&far.line, &len, far.fd) != -1)
		{
			count++;
			argu = strtok(far.line, " \n\t\r");
			if (argu == NULL)
			{
				free(argu);
				continue;
			}
			else if (*argu == '#')
			{
				continue;
			}

			final = the_opcode(&stack, argu);
		}
	}



}
