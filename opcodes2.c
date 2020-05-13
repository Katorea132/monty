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
/**
 * pchar - prints the char at the top of the stack
 * @stack: Holds the head of the stack
 * @linen: Holds the number of the line
 * Return: none
 */
void pchar(stack_t **stack, unsigned int linen)
{
	if (*stack)
	{
		if ((*stack)->n >= 0 && (*stack)->n <= 127)
		{
			printf("%c\n", (*stack)->n);
			return;
		}
		fprintf(stderr, "L%u: can't pchar, value out of range\n", linen);
		MasterWilliamWallace(1), exit(EXIT_FAILURE);
	}
	fprintf(stderr, "L%u: can't pchar, stack empty\n", linen);
	MasterWilliamWallace(1), exit(EXIT_FAILURE);
}
/**
 * pstr - prints the char at the top of the stack
 * @stack: Holds the head of the stack
 * @linen: Holds the number of the line
 * Return: none
 */
void pstr(stack_t **stack, unsigned int linen)
{
	stack_t *tmp;

	(void) linen;
	if (*stack)
	{
		for (tmp = *stack; tmp; tmp = tmp->next)
		{
			if (tmp->n > 0 && tmp->n <= 127)
				putchar(tmp->n);
			else
				break;
		}
	}
	putchar('\n');
}
/**
 * rotl - Rotates the stack to the top
 * @stack: Holds the head of the stack
 * @linen: Holds the number of the line
 * Return: none
 */
void rotl(stack_t **stack, unsigned int linen)
{
	stack_t *tmp;
	int holdy;

	(void) linen;
	if (*stack)
	{
		tmp = (*stack)->next;
		if (tmp)
		{
			holdy = (*stack)->n;
			delete_nodeIndx(stack, 0);
			add_nodeintend(stack, holdy);
		}
	}
}
/**
 * rotr - Rotates the stack to the top
 * @stack: Holds the head of the stack
 * @linen: Holds the number of the line
 * Return: none
 */
void rotr(stack_t **stack, unsigned int linen)
{
	stack_t *tmp;
	int holdy, i;

	(void) linen;
	if (*stack)
	{
		tmp = (*stack)->next;
		if (tmp)
		{
			for (i = 1; tmp->next; tmp = tmp->next, i++)
				;
			holdy = tmp->n;
			delete_nodeIndx(stack, i);
			add_nodeint(stack, holdy);
		}
	}
}
