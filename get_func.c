#include "monty.h"
#include "lists.h"

/**
 *
 *
 *
 */

void (*f)(stack_t **stack, unsigned int line_number);
	instruction_T [] {
	
		{"push", push_handler},
		{"pall", pall_handler},
		{"pint", pint_handler},
		{"pop", pop_handler},
		{"nop", nop_handler},
		{"sub", sub_handler},
	}	

/**
 *
 *
 *
 */

void push_handler(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
}
