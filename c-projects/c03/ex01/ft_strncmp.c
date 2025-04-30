/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustaoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 17:21:05 by gustaoli          #+#    #+#             */
/*   Updated: 2025/04/29 17:21:09 by gustaoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n);
int	ft_charcmp(char c1, char c2);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				cmp;

	i = 0;
	while ((s1[i] || s2[i]) && (i + 1 < n))
	{
		cmp = ft_charcmp(s1[i], s2[i]);
		if (cmp != 0)
		{
			return (cmp);
		}
		i++;
	}
	return (0);
}

int	ft_charcmp(char c1, char c2)
{
	return (c1 - c2);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("0 - %i\n", ft_strncmp("A", "B", 1));
	printf("1 - %i\n", ft_strncmp("4", "2", 1));
	printf("2 - %i\n", ft_strncmp("2", "2", 1));
	printf("3 - %i\n", ft_strncmp("4242", "2424", 2));
	printf("4 - %i\n", ft_strncmp("424242", "42D42", 2));
}*/
