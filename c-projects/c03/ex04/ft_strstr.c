/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustaoli <gustaoli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 18:08:51 by gustaoli          #+#    #+#             */
/*   Updated: 2025/05/01 14:18:28 by gustaoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);
int		ft_strlen(char *src);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	to_find_len;

	to_find_len = ft_strlen(to_find);
	j = 0;
	i = 0;
	while (str[i] && to_find[j])
	{
		if (str[i] == to_find[j])
		{
			j++;
		}
		else
		{
			j = 0;
		}
		i++;
	}
	if (str[i] == '\0' && j != to_find_len)
	{
		return ((void *) 0);
	}
	return (&str[i - j]);
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
#include <string.h>
int	main(void)
{
	char	str0[] = "cachorro come muito";
	char	str1[] = "orro";
	
	printf("%s\n", ft_strstr(str0, str1));
	printf("%s\n", strstr(str0, str1));
}
*/
