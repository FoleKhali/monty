#include "lists.h"
#include "monty.h"

stack_t *n_node(int n)
{
	stack_t *new = NULL;
	*new = malloc(size(stack_t));
	if (new = NULL)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	return (new);
}

void push_handler(stack_t **stack, unsigned int line_number)
{
	stack_t *new = NULL;
	(void)line_number;

	new = n_node;

	new->next = *stack;
	if (*stack != NULL)
	{
		(*stack)->prev = new;
	}
	*stack = new;
}

void pall_handler(stack_t **stack, unsigned int n)
{
	stack_t *now = NULL;
	(void)n;

	while (now != NULL)
	{
		printf()
		now = now->next;
	}
}
