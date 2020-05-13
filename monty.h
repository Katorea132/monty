#ifndef MONTICO
#define MONTICO
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
/**
 * struct h - Holds all that I need to carry around
 * @file: Holds the opened file
 * @line: Holds the line gotten by getline
 * @linen: Command line
 * @stack: The stack or queue to be used
 * @command: The array holding the op code and value
 */
typedef struct holdertron
{
	FILE *file;
	char *line;
	unsigned int linen;
	stack_t *stack;
	char **comm;
} holdy;
extern holdy lili;
/* In monty.c */
char **commandizer(char **line);
void opcoder();

/* In aux.c */
void WilliamWallace(char **Liberty);
stack_t *add_nodeint(stack_t **stack, int n);
void MasterWilliamWallace(int iffy);
void WilliamListallace(void);

/* In opcodes.c */
void push(stack_t **stack, unsigned int linen);

#endif /* for MONTICO */