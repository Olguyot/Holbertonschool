#include "3-calc.h"
int (*get_op_func(char *s))(int, int)
{
	/*
	   op_t *o;// Init de la structure 
	   o.op = "+"; // definition de la premiere var de la structure ici char *op
	   o.f = op_add;// definition de la seconde var de la structure ici f. f est un pointeur sur fonction qui pointe vers une adresse, ici l'adresse de la fonction op_add.
	 */
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};//On a initialiser une structure ops et on a definit des variable pour chaque element du tableau? 
	int i;

	/*check de s sur element op de la structure*/
	i = 0;
	while (ops[i].op != NULL)
	{
		if (s[0] == ops[i].op[0])//equi (*s == *ops[i].op)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
