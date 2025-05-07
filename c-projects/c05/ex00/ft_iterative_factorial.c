/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustaoli <gustaoli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 13:05:15 by gustaoli          #+#    #+#             */
/*   Updated: 2025/05/07 10:05:09 by gustaoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb >= 0)
	{
		while (nb > 0)
		{
			res *= nb;
			nb--;
		}
	}
	else
		return (0);
	return (res);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("5! -> %d", ft_iterative_factorial(5));
	printf("0! -> %d", ft_iterative_factorial(0));
}
*/
