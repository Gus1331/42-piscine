/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustaoli <gustaoli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 14:06:16 by gustaoli          #+#    #+#             */
/*   Updated: 2025/05/07 10:20:23 by gustaoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power);

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 1)
		return (nb);
	else if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

/*
#include <stdio.h>
int	main(void)
{
	printf("5^5 ->%d\n", ft_recursive_power(5, 5));
	printf("4^-1 ->%d\n", ft_recursive_power(4, -1));
	printf("0^0 ->%d\n", ft_recursive_power(0, 0));
}
*/
