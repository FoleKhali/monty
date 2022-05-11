#include "monty.h"
#include "lists.h"

/**
 * @f: ...
 */

void (*f)(stack_t **stack, unsigned int line_number)
{
	instruction_T [] {	
		{"push", push_handler},
		{"pall", pall_handler},
		{"pint", pint_handler},
		{"pop", pop_handler},
		{"nop", nop_handler},
		{"sub", sub_handler},
	}
}
