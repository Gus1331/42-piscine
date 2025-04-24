/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustaoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 19:10:47 by gustaoli          #+#    #+#             */
/*   Updated: 2025/04/23 11:37:47 by gustaoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *des, char *src);

char	*ft_strcpy(char *des, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		des[i] = src[i];
		i++;
	}
	des[i] = '\0';
	return (des);
}
/*
int	main()
{
	char	str[] = "forty two sp";
	char	des[] = "one";

	ft_strcpy(des, str);
	printf("%s", des);
}
*/
