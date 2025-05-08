/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustaoli <gustaoli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 13:53:31 by gustaoli          #+#    #+#             */
/*   Updated: 2025/05/08 14:15:03 by gustaoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while ((i * i) <= nb)
	{
		if (nb % i++ == 0)
			return (0);
	}
	return (1);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("2 = %d\n", ft_is_prime(2));
    printf("3 = %d\n", ft_is_prime(3));
    printf("4 = %d\n", ft_is_prime(4));
    printf("5 = %d\n", ft_is_prime(5));
    printf("16 = %d\n", ft_is_prime(16));
    printf("17 = %d\n", ft_is_prime(17));
    printf("18 = %d\n", ft_is_prime(18));
    printf("19 = %d\n", ft_is_prime(19));
    printf("20 = %d\n", ft_is_prime(20));
}
*/
