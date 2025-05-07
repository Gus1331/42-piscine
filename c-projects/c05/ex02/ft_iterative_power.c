/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustaoli <gustaoli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 11:45:32 by gustaoli          #+#    #+#             */
/*   Updated: 2025/05/06 14:18:52 by gustaoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)
{
	int	res;

	if (power < 0)
		return (0);
	res = 1;
	while (power > 0)
	{
		res *= nb;
		power--;
	}
	return (res);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("5^5 ->%d\n", ft_iterative_power(5, 5));
	printf("4^-1 ->%d\n", ft_iterative_power(4, -1));
	printf("0^0 ->%d\n", ft_iterative_power(0, 0));
}
*/
