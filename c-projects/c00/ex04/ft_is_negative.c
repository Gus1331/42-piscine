/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustaoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 14:32:00 by gustaoli          #+#    #+#             */
/*   Updated: 2025/04/18 14:37:29 by gustaoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	char	s;

	s = 'P';
	if (n < 0)
	{
		s = 'N';
	}
	write(1, &s, 1);
}

/*
int	main()
{
	int n;

	n	= 42;
	ft_is_negative(n);
	n = -42;
	ft_is_negative(n);
}
*/