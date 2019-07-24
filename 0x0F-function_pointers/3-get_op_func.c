#include "3-calc.h"
#include <stdlib.h>
/**
* get_op_func - Selects the correct function to perform the operation asked.
* @s: Operator to use.
* Return: Pointer to the correct function.
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i = 0;

	while (i < 6)
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
		i++;
	}
	return (0);
}
