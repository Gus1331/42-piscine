/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustaoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:09:39 by gustaoli          #+#    #+#             */
/*   Updated: 2025/04/18 13:59:38 by gustaoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	char	a;

	a = 'a';
	while (a != ('z' + 1))
	{
		write(1, &a, 1);
		a++;
	}
}

/*
int	main()
{
	ft_print_alphabet();	
}
*/
