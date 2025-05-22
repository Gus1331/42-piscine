/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustaoli <gustaoli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 10:24:05 by gustaoli          #+#    #+#             */
/*   Updated: 2025/05/08 14:07:24 by gustaoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("SQRT 9 -> %d\n", ft_sqrt(9));
	printf("SQRT 144 -> %d\n", ft_sqrt(144));
	printf("SQRT 13 -> %d\n", ft_sqrt(13));
}
*/
