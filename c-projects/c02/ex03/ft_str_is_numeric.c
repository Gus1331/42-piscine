/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustaoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 15:45:41 by gustaoli          #+#    #+#             */
/*   Updated: 2025/04/23 16:06:27 by gustaoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
int	main()
{
	char	output1;
	char	output2;

	output1 = '0' + ft_str_is_numeric("44!22");
	output2 = '0' + ft_str_is_numeric("42");
	write(1, &output1, 1);
	write(1, &output2, 1);
}
*/
