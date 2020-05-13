#include "monty.h"
/**
 * add - Adds first 2 elements, removes top stack and saves the value in next
 * @stack: Holds the head of the stack
 * @linen: Holds the number of the line
 * Return: none
 */
void add(stack_t **stack, unsigned int linen)
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
			c = a + b;
			tmp->n = c;
			delete_nodeIndx(stack, 0);
			return;
		}
	}
	fprintf(stderr, "L%u: can't add, stack too short\n", linen);
	MasterWilliamWallace(1), exit(EXIT_FAILURE);
}
/**
 * nop - nop
 * @stack: nop
 * @linen: nop
 * Return: nope, chuck testa
 */
void nop(stack_t **stack, unsigned int linen)
{
	(void) stack;
	(void) linen;
}
/**
 * sub - Substracts first 2 elements
 * @stack: Holds the head of the stack
 * @linen: Holds the number of the line
 * Return: none
 */
void sub(stack_t **stack, unsigned int linen)
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
			c = a - b;
			tmp->n = c;
			delete_nodeIndx(stack, 0);
			return;
		}
	}
	fprintf(stderr, "L%u: can't sub, stack too short\n", linen);
	MasterWilliamWallace(1), exit(EXIT_FAILURE);
}
/**
 * _div - Divides first 2 elements
 * @stack: Holds the head of the stack
 * @linen: Holds the number of the line
 * Return: none
 */
void _div(stack_t **stack, unsigned int linen)
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
			c = a / b;
			tmp->n = c;
			delete_nodeIndx(stack, 0);
			return;
		}
	}
	fprintf(stderr, "L%u: can't div, stack too short\n", linen);
	MasterWilliamWallace(1), exit(EXIT_FAILURE);
}
/**
 * mul - Multiplicates first 2 elements
 * @stack: Holds the head of the stack
 * @linen: Holds the number of the line
 * Return: none
 */
void mul(stack_t **stack, unsigned int linen)
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
			c = a * b;
			tmp->n = c;
			delete_nodeIndx(stack, 0);
			return;
		}
	}
	fprintf(stderr, "L%u: can't mul, stack too short\n", linen);
	MasterWilliamWallace(1), exit(EXIT_FAILURE);
}
