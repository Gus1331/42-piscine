// COLOCAR HEADER

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);
void	ft_putstr(char *str);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				cmp;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		cmp = s1[i] - s2[i];
		if (cmp != 0)
		{
			return (cmp);
		}
		i++;
	}
	return (0);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int sorted;

	i = 1;
	while (sorted)
	{
        sorted = 0;
		j = 0;
		while (i < argc)
		{
            if(ft_strncmp(argv[i], argv[i + 1]))
                sorted++;
			i++;
		}
		
	}
}