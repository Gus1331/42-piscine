// COLOCAR HEADER

#include <unistd.h>

int	main(int argc, char **argv)
{
	(void)argc;
	while (**argv)
	{
		write(1, *argv, 1);
		(*argv)++;
	}
}