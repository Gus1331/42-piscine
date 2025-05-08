/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustaoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 11:05:37 by gustaoli          #+#    #+#             */
/*   Updated: 2025/04/28 18:02:03 by gustaoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);
void	ft_space(void);
void	ft_print_num(int n);
void	ft_print_three_num(int n1, int n2, int n3);

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i < 8)
	{
		j = i + 1;
		while (j < 9)
		{
			k = j + 1;
			while (k <= 9)
			{
				ft_print_three_num(i, j, k);
				if (!(i == 7 && j == 8 && k == 9))
				{
					ft_space();
				}
				k++;
			}
			j++;
		}
		i++;
	}
}

void	ft_print_three_num(int n1, int n2, int n3)
{
	ft_print_num(n1);
	ft_print_num(n2);
	ft_print_num(n3);
}

void	ft_print_num(int n)
{
	char	c;

	c = '0' + n;
	write(1, &c, 1);
}

void	ft_space(void)
{
	char	con;
	char	spc;

	con = ',';
	spc = ' ';
	write(1, &con, 1);
	write(1, &spc, 1);
}

/*
int	main()
{
	ft_print_comb();
}
*/
