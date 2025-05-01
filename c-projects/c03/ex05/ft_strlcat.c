/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustaoli <gustaoli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 10:55:49 by gustaoli          #+#    #+#             */
/*   Updated: 2025/05/01 06:40:13 by gustaoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int				ft_strlen(char *src);
int				ft_strlen(char *src);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size <= dest_len)
	{
		src_len += size;
	}
	else
	{
		src_len += dest_len;
	}
	i = 0;
	while (src[i] && (dest_len + 1 < (size)))
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';
	return (src_len);
}

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

/*
#include <stdio.h>
int main ()
{
	char s0[50] = {"Hello "};
	char s1[50] = {"World!"};
	printf("%i\n", ft_strlcat(s0, s1, 10));
	printf("%s\n", s0);
	return 0;
}
*/
