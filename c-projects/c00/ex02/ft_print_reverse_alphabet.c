/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustaoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 13:54:35 by gustaoli          #+#    #+#             */
/*   Updated: 2025/04/18 13:58:12 by gustaoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void);

void	ft_print_reverse_alphabet(void)
{
	char	z;

	z = 'z';
	while (z != ('a' - 1))
	{
		write(1, &z, 1);
		z--;
	}
}

/*
int	main()
{
	ft_print_reverse_alphabet();
}
*/
