/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustaoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 12:56:10 by gustaoli          #+#    #+#             */
/*   Updated: 2025/04/29 12:56:17 by gustaoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	ft_space(void);
void	ft_space_con(void);
void	ft_print_num(int n);
void	ft_print_nums(int n1, int n2);

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j < 99)
		{
            ft_print_nums(i, j);
            ft_space();
            ft_print_nums(i, j);
            ft_space_con();
			j++;
		}
		i++;
	}
}

void	ft_print_nums(int n1, int n2)
{
    if (n1 < 10)
    {
        ft_print_num(0);
        ft_print_num(n1);
    }
    else{
        ft_print_num(n1);
        ft_print_num(n2);

    }
}

void	ft_print_num(int n)
{
	char	c;

	c = '0' + n;
	write(1, &c, 1);
}

void	ft_space(void)
{
	char	spc;

	spc = ' ';
	write(1, &spc, 1);
}

void	ft_space_con(void)
{
	char	con;

	con = ',';
	write(1, &con, 1);
    ft_space();
}

int	main()
{
	ft_print_comb2();
}
