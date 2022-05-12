#include "lists.h"
#include "monty.h"

/**
 * @f: ...
 */

void the_opcode(stack_t **stack, char *argu)
{ 
	instruction_t code[] = {
		{"push", push_handler},
		{"pall", pall_handler},
		{"pint", pint_handler},
		{"pop", pop_handler},
		{"nop", nop_handler},
		{"sub", sub_handler},
		{NULL, NULL}
	};

	int x = 0;

	while (code[x].opcode)
	{
		if (strcmp())
	}

}

/**
 * @f: ...
 */


stack_t *n_node(int n)
{
	stack_t *new = NULL;
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	return (new);
}

/**
 * @f: ...
 */

void push_handler(stack_t **stack, unsigned int line_number)
{
	stack_t *new = NULL;
	(void)line_number;

	new = n_node(result);

	new->next = *stack;
	if (*stack != NULL)
	{
		(*stack)->prev = new;
	}
	*stack = new;
}

/**
 * @f: ...
 */

void pall_handler(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	if (*stack)
		print_dlistint(*stack);
}

void nop_handler(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}

