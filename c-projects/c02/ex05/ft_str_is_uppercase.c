/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustaoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 16:09:41 by gustaoli          #+#    #+#             */
/*   Updated: 2025/04/24 13:23:45 by gustaoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (*str < 'A' || *str > 'Z')
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

	output1 = '0' + ft_str_is_uppercase("foRtYtWo");
	output2 = '0' + ft_str_is_uppercase("ECOLE");
	write(1, &output1, 1);
	write(1, &output2, 1);
}
*/
