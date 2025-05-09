/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustaoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 12:43:55 by gustaoli          #+#    #+#             */
/*   Updated: 2025/04/24 13:12:05 by gustaoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{	
	while (*str != '\0')
	{
		if (*str < 'A' || (*str > 'Z' && *str < 'a') || *str > 'z')
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

	output1 = '0' + ft_str_is_alpha("FORTYtwo");
	output2 = '0' + ft_str_is_alpha("forty 42 two");
	write(1, &output1, 1);
	write(1, &output2, 1);
}
*/
