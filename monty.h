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
 * struct holdertron - Holds all that I need to carry around
 * @file: Holds the opened file
 * @line: Holds the line gotten by getline
 * @linen: Command line
 * @stack: The stack or queue to be used
 * @comm: The array holding the op code and value
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
void opcoder(void);

/* In aux.c */
void WilliamWallace(char **Liberty);
stack_t *add_nodeintend(stack_t **stack, int n);
stack_t *add_nodeint(stack_t **stack, int n);
void MasterWilliamWallace(int iffy);
void WilliamListallace(void);

/* In aux1.c */
int delete_nodeIndx(stack_t **stack, unsigned int index);

/* In opcodes.c */
void push(stack_t **stack, unsigned int linen);
void pall(stack_t **stack, unsigned int linen);
void pint(stack_t **stack, unsigned int linen);
void pop(stack_t **stack, unsigned int linen);
void swap(stack_t **stack, unsigned int linen);

/* In opcodes1.c */
void add(stack_t **stack, unsigned int linen);
void nop(stack_t **stack, unsigned int linen);
void sub(stack_t **stack, unsigned int linen);
void _div(stack_t **stack, unsigned int linen);
void mul(stack_t **stack, unsigned int linen);

/* In opcodes2.c */
void mod(stack_t **stack, unsigned int linen);
void pchar(stack_t **stack, unsigned int linen);
void pstr(stack_t **stack, unsigned int linen);
void rotl(stack_t **stack, unsigned int linen);
void rotr(stack_t **stack, unsigned int linen);

#endif /* for MONTICO */
