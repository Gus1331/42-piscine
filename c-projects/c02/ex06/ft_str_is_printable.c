/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustaoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 13:31:33 by gustaoli          #+#    #+#             */
/*   Updated: 2025/04/24 13:33:07 by gustaoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str < ' ' || *str > '~')
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

	output1 = '0' + ft_str_is_printable("fo\nRtYtWo");
	output2 = '0' + ft_str_is_printable("ecole");
	write(1, &output1, 1);
	write(1, &output2, 1);
}
*/
