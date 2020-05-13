#include "monty.h"
/**
 * push - Pushes to the stack/Queue the given value if valid
 * @stack: Holds the head of the stack
 * @linen: Holds the number of the line
 * Return: none
 */
void push(stack_t **stack, unsigned int linen)
{
	int num, i, chk = 2;

	if (lili.comm[1] != 0)
	{
		for (i = 0; lili.comm[1][i]; i++)
		{
			if (!(lili.comm[1][i] >= '0' &&
			lili.comm[1][i] <= '9') && (lili.comm[1][i] != '-'))
			{
				printf("%c\n", lili.comm[1][i]);
				chk = 1;
			}
		}
		if (chk != 1)
		{
			num = atoi(lili.comm[1]);
			if (strcmp("0", lili.comm[1]) == 0)
			{
				add_nodeint(stack, 0);
				return;
			}
			else if (num != 0)
			{
				add_nodeint(stack, num);
				return;
			}
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
	(void) linen;
	stack_t *tmp = *stack;

	for (; tmp; tmp = tmp->next)
		printf("%d\n", tmp->n);
}
