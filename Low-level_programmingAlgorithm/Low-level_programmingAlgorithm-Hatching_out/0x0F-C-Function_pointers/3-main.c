#include "3-calc.h"
/**
 * main - main
 * @argc: argc
 * @argv: arv
 * Return: result
 */
int main(int argc, char *argv[])
{
	int nb1;
	int nb2;
	char *operator;
	char opc;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	nb1 = atoi(argv[1]);
	nb2 = atoi(argv[3]);
	operator = argv[2];

	opc = operator[0];

	if ((opc != '+' && opc != '-' && opc != '*' && opc != '/' && opc != '%')
	|| strlen(operator) != 1)
	{
		printf("Error\n");
		exit(99);
	}

	if (nb2 == 0 && (opc == '/' || operator[0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(operator)(nb1, nb2));
	return (0);
}
