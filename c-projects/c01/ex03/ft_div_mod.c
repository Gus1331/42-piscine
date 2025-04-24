/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustaoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 15:42:39 by gustaoli          #+#    #+#             */
/*   Updated: 2025/04/21 15:51:21 by gustaoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main()
{
	int	div;
	int	mod;

	ft_div_mod(10, 2, &div, &mod);
	printf("A: %d\nB: %d\nDIV: %d\nMOD: %d", 10, 2, div, mod);
}
*/
