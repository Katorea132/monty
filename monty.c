#include "monty.h"
holdy lili;
/**
 * opcoder - Searches for the opcode
 * Return: none
 */
void opcoder(void)
{
	unsigned int i;
	instruction_t codes[] = {
		{"push", push}, {"pall", pall}, {"pint", pint}, {"pop", pop},
		{"swap", swap}, {"add", add}, {"nop", nop}, {"sub", sub},
		{"div", _div}, {"mul", mul}, {"mod", mod}, {"pchar", pchar},
		{"pstr", pstr}, {"rotl", rotl}, {"rotr", rotr},  {0, 0}
	};
	if (!lili.comm[0])
		return;
	if (lili.comm[0][0] == '#')
		return;
	for (i = 0; codes[i].opcode; i++)
	{
		if (strcmp(codes[i].opcode, lili.comm[0]) == 0)
		{
			codes[i].f(&lili.stack, lili.linen);
			return;
		}
	}
	fprintf(stderr, "L%u: unknown instruction %s\n", lili.linen, lili.comm[0]);
	MasterWilliamWallace(1), exit(EXIT_FAILURE);
}
/**
 * commandizer - Commandizes the first 2 instructions into opcodes
 * @line: Recieves the line to be commandized
 * Return: none
 */
char **commandizer(char **line)
{
	unsigned int ar;
	char *tok = 0, **comm;

	comm = malloc(sizeof(char *) * 3);
	if (!comm)
	{
		fprintf(stderr, "Error: malloc failed\n"), MasterWilliamWallace(1);
		exit(EXIT_FAILURE);
	}
	comm[0] = 0, comm[1] = 0;
	for (ar = 0, tok = strtok(line[0], " \n\t\v\f"); tok && ar <= 1; ar++)
		comm[ar] = strdup(tok), tok = strtok(0, " \n\t\v\f");
	comm[2] = 0;
	return (comm);
}
/**
 * main - Where the program starts
 * @argc: Argument count
 * @av: Argument holders
 * Return: 0 if successfull, something else otherwise
 */
int main(int argc, char *av[])
{
	ssize_t chars = 0;
	size_t size = 0;

	lili.linen = 0;
	lili.stack = 0;

	if (argc != 2)
		fprintf(stderr, "USAGE: monty file\n"), exit(EXIT_FAILURE);
	lili.file = fopen(av[1], "r");
	if (!lili.file)
		fprintf(stderr, "Error: Can't open file %s\n", av[1]), exit(EXIT_FAILURE);
	while ((chars = getline(&lili.line, &size, lili.file)) != -1)
	{
		lili.linen++;
		lili.comm = commandizer(&lili.line), opcoder();
		WilliamWallace(lili.comm);
	}
	MasterWilliamWallace(0);
	return (EXIT_SUCCESS);
}
