/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustaoli <gustaoli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 00:56:50 by gustaoli          #+#    #+#             */
/*   Updated: 2025/05/06 11:34:03 by gustaoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	skip_spaces(char **str);
int		is_num(char c);
int		how_many_negatives(char **str);
int		ft_atoi(char *str);

int	ft_atoi(char *str)
{
	int	negatives;
	int	res;

	skip_spaces(&str);
	negatives = how_many_negatives(&str);
	res = 0;
	while (is_num(*str))
	{
		res *= 10;
		res += *str - '0';
		str++;
	}
	if (negatives % 2 == 1)
	{
		res *= -1;
	}
	return (res);
}

void	skip_spaces(char **str)
{
	while (**str == ' ' || (**str >= '\t' && **str <= '\f'))
	{
		(*str)++;
	}
}

int	is_num(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

int	how_many_negatives(char **str)
{
	int	negatives;

	negatives = 0;
	while (**str == '+' || **str == '-')
	{
		if (**str == '-')
		{
			negatives++;
		}
		(*str)++;
	}
	return (negatives);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%i\n", ft_atoi("    \t -+---+-+324fd243"));
	printf("%i\n", ft_atoi("  ---+--+1234ab567"));
}
*/