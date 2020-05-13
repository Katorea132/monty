#include "monty.h"
void push(stack_t **stack, unsigned int linen)
{
	int num;

	if (lili.comm[1] != 0)
	{
		if (strcmp("0", lili.comm[1]) == 0)
		{
			num = 0;
			add_nodeint(stack, num);
			return;
		}
		else if((num = atoi(lili.comm[1]) != 0))
		{
			add_nodeint(stack, num);
			return;
		}
	}
	fprintf(stderr, "L%u: usage: push integer\n", linen);
	MasterWilliamWallace(1), exit (EXIT_FAILURE);
}