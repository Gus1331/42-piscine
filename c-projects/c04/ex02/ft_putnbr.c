/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustaoli <gustaoli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 20:41:19 by gustaoli          #+#    #+#             */
/*   Updated: 2025/05/05 17:11:52 by gustaoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);
void	ft_negative(int *nb);

void	ft_putnbr(int nb)
{
	char	aux;

	aux = '0';
	ft_negative(&nb);
	if (nb >= 10)
	{
		ft_putnbr((nb / 10));
		aux += nb % 10;
	}
	else
	{
		aux += nb;
	}
	if (nb == -2147483648)
		write(1, "2147483648", 10);
	else
		write(1, &aux, 1);
}

void	ft_negative(int *nb)
{
	if (*nb < 0)
	{
		write(1, "-", 1);
		*nb *= -1;
	}
}

/*
int	main(void)
{
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(4224);
	write(1, "\n", 1);
	ft_putnbr(-4242);
	write(1, "\n", 1);
	ft_putnbr(-42);
	write(1, "\n", 1);
	ft_putnbr(4);
	write(1, "\n", 1);
	ft_putnbr(-2);
}
*/
