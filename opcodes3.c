#include "monty.h"
/**
 * stack - Determines the stack mode
 * @stack: Holds the head of the stack
 * @linen: Holds the number of the line
 * Return: none
 */
void stack(stack_t **stack, unsigned int linen)
{
	(void) stack;
	(void) linen;
	lili.mode = 1;
}
/**
 * queue - Determines the queue mode
 * @stack: Holds the head of the stack
 * @linen: Holds the number of the line
 * Return: none
 */
void queue(stack_t **stack, unsigned int linen)
{
	(void) stack;
	(void) linen;
	lili.mode = -1;
}
