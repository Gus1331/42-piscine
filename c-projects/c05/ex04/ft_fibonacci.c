/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustaoli <gustaoli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 14:20:46 by gustaoli          #+#    #+#             */
/*   Updated: 2025/05/07 10:13:29 by gustaoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index);

int	ft_fibonacci(int index)
{
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	else if (index < 0)
		return (-1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/* 
#include <stdio.h>
int	main(void)
{
	printf("0 -> %d\n", ft_fibonacci(0));
	printf("1 -> %d\n", ft_fibonacci(1));
	printf("2 -> %d\n", ft_fibonacci(2));
	printf("3 -> %d\n", ft_fibonacci(3));
	printf("4 -> %d\n", ft_fibonacci(4));
	printf("5 -> %d\n", ft_fibonacci(5));
}
*/