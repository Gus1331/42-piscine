/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustaoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 15:55:07 by gustaoli          #+#    #+#             */
/*   Updated: 2025/04/21 16:03:04 by gustaoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aa;
	int	bb;

	aa = *a;
	bb = *b;
	*a = aa / bb;
	*b = aa % bb;
}
/*
int	main(){
	int a, b;

	a = 10;
	b = 2;

	ft_ultimate_div_mod(&a, &b);
	printf("A: %d\nB: %d\nDIV: %d\nMOD: %d", 10, 2, a, b);

}
*/
