/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustaoli <gustaoli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 18:08:51 by gustaoli          #+#    #+#             */
/*   Updated: 2025/05/01 07:54:41 by gustaoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);
int		ft_strlen(char *src);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	to_find_len;

	to_find_len = ft_strlen(to_find);
	while (*str)
	{
		if (*str == to_find[i] || !to_find[0])
		{
			i = 0;
			while ((i < to_find_len) && (to_find[i] == str[i]))
			{
				i++;
			}
			if (i == to_find_len)
			{
				return (str);
			}
		}
		str++;
	}
	return ((void *) 0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

/*
#include <stdio.h>
int	main(void)
{
	char	str0[23] = "Lorem Ipsum Dolor sit.";
	char	str1[] = "";

	printf("%s\n", ft_strstr(str0, str1));
}
*/
