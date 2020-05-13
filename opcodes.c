#include "monty.h"
/**
 * push - Pushes to the stack/Queue the given value if valid
 * @stack: Holds the head of the stack
 * @linen: Holds the number of the line
 * Return: none
 */
void push(stack_t **stack, unsigned int linen)
{
	int i, chk = 2;

	if (lili.comm[1] != 0)
	{
		for (i = 0; lili.comm[1][i]; i++)
		{
			if (!(lili.comm[1][i] >= '0' &&
			lili.comm[1][i] <= '9') && (lili.comm[1][i] != '-'))
			{
				chk = 1;
			}
		}
		if (chk != 1)
		{
			add_nodeint(stack, atoi(lili.comm[1]));
			return;
		}
	}
	fprintf(stderr, "L%u: usage: push integer\n", linen);
	MasterWilliamWallace(1), exit(EXIT_FAILURE);
}
/**
 * pall - Prints the stack/Queue
 * @stack: Holds the head of the stack
 * @linen: Holds the number of the line
 * Return: none
 */
void pall(stack_t **stack, unsigned int linen)
{
	stack_t *tmp = *stack;

	(void) linen;

	for (; tmp; tmp = tmp->next)
		printf("%d\n", tmp->n);
}
/**
 * pint - Prints the head/value top of the stack
 * @stack: Holds the head of the stack
 * @linen: Holds the number of the line
 * Return: none
 */
void pint(stack_t **stack, unsigned int linen)
{
	if (*stack)
	{
		printf("%d\n", (*stack)->n);
		return;
	}
	fprintf(stderr, "L%u: can't pint, stack empty\n", linen);
	MasterWilliamWallace(1), exit(EXIT_FAILURE);
}
/**
 * pop - Removes the top level of the stack
 * @stack: Holds the head of the stack
 * @linen: Holds the number of the line
 * Return: none
 */
void pop(stack_t **stack, unsigned int linen)
{
	if (delete_nodeIndx(stack, 0) == 1)
		return;
	fprintf(stderr, "L%u: can't pop an empty stack\n", linen);
	MasterWilliamWallace(1), exit(EXIT_FAILURE);
}
