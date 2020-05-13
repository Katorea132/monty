#include "monty.h"
/**
 * WilliamWallace - LIBERATES arrays
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
