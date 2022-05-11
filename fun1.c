#include "monty.h"

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	if (!h)
		return(0);
	while (h)
	{
		printf("%d\n", h->n);
		nodes++;	
	}
	return(nodes);
}

