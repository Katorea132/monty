#include "monty.h"
/**
 * WilliamWallace - LIBERATES an array
 * @Liberty: Holds the soon to be FREEE array
 * Return: none
 */
void WilliamWallace(char **Liberty)
{
	unsigned int Freedom;

	for (Freedom = 0; Liberty[Freedom]; Freedom++)
		free(Liberty[Freedom]);
	free(Liberty);
}
/**
 * MasterWilliamWallace - LIBERATES FREAKING EVERYTHING
 * @iffy: Determines if FREAKING EVERYTHING or almost EVERYTHING
 * Return: A brave new world
 */
void MasterWilliamWallace(int iffy)
{
	if (iffy == 1)
		WilliamWallace(lili.comm);
	free(lili.line);
	fclose(lili.file);
	WilliamListallace();
}
/**
 * add_nodeint - Adds a node to the end of the given double linked list
 * @stack: Holds the head
 * @n: Holds the number to add
 * Return: a pointer to the added node
 */
stack_t *add_nodeint(stack_t **stack, int n)
{
	stack_t *tmp;
	stack_t *lili = malloc(sizeof(stack_t));

	if (lili)
	{
		lili->n = n;
		if (*stack)
		{
			for (tmp = *stack; tmp->next; tmp = tmp->next)
				;
			lili->prev = tmp;
			tmp->next = lili;
			lili->next = 0;
			return (lili);
		}
		*stack = lili;
		lili->next = 0;
		lili->prev = 0;
		return (lili);
	}
	fprintf(stderr, "Error: malloc failed"), exit (EXIT_FAILURE);
}
/**
 * WilliamListallace - FREES lists
 * Return: The list of freedom
 */
void WilliamListallace(void)
{
	stack_t *swappity, *tmp;

	if (!lili.stack)
		return;
	for (swappity = lili.stack->next; swappity; swappity = tmp)
	{
		tmp = swappity->next;
		free(swappity);
	}
	free(lili.stack);
}