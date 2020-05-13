#include "monty.h"
/**
 * mod - Divides first 2 elements
 * @stack: Holds the head of the stack
 * @linen: Holds the number of the line
 * Return: none
 */
void mod(stack_t **stack, unsigned int linen)
{
	int a, b, c;
	stack_t *tmp;

	if (*stack)
	{
		tmp = (*stack)->next;
		if (tmp)
		{
			a = tmp->n;
			b = (*stack)->n;
			if (b == 0)
			{
				fprintf(stderr, "L%u: division by zero\n", linen);
				MasterWilliamWallace(1), exit(EXIT_FAILURE);
			}
			c = a % b;
			tmp->n = c;
			delete_nodeIndx(stack, 0);
			return;
		}
	}
	fprintf(stderr, "L%u: can't mod, stack too short\n", linen);
	MasterWilliamWallace(1), exit(EXIT_FAILURE);
}
