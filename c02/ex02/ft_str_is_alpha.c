/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustaoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 12:43:55 by gustaoli          #+#    #+#             */
/*   Updated: 2025/04/23 15:32:10 by gustaoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{	
	if (str[0] == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
		{
			return (1);
		}
		str++;
	}
	return (0);
}
/*
int	main()
{
	char	output1;
	char	output2;

	output1 = '0' + ft_str_is_alpha("#@!$%¨&(&%&¨#@\\800+_(&*¨%$!'43/;~.,]~´[[9");
	output2 = '0' + ft_str_is_alpha("0000Lorem Ipsum Dolor Sit.00000");
	write(1, &output1, 1);
	write(1, &output2, 1);
}
*/
