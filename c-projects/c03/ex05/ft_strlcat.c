/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustaoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 10:55:49 by gustaoli          #+#    #+#             */
/*   Updated: 2025/04/30 10:56:05 by gustaoli         ###   ########.fr       */
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
	if (dest_len >= size)
	{
		return (size + src_len);
	}
	i = 0;
	while (src[i] && (dest_len + i < (size - 1)))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i + 1] = '\0';
	return (dest_len + src_len);
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
#include <string.h>
#include <bsd/string.h> 

void test_strlcat(char *d, char *s, size_t size) {
    char dst1[100], dst2[100];
    size_t ret1, ret2;

    // Inicializa os buffers com dados idênticos
    memset(dst1, 0, sizeof(dst1));
    memset(dst2, 0, sizeof(dst2));
    strncpy(dst1, d, sizeof(dst1)-1);
    strncpy(dst2, d, sizeof(dst2)-1);
    ret1 = strlcat(dst1, s, size);
    ret2 = ft_strlcat(dst2, s, size);

    if (ret1 != ret2 || strcmp(dst1, dst2) != 0) {
        printf("❌ Falha: strlcat(\"%s\", \"%s\", %zu)\n", d, s, size);
        printf("  Original => [%s] (%zu)\n", dst1, ret1);
        printf("  Implement => [%s] (%zu)\n", dst2, ret2);
    } else {
        printf("✅ OK: strlcat(\"%s\", \"%s\", %zu) 
		=> [%s] (%zu)\n", d, s, size, dst2, ret2);
    }
}

int	main(void)
{
    test_strlcat("Hello", " World", 20);
    test_strlcat("Hello", " World", 0);
    test_strlcat("Hello", "", 10);
    test_strlcat("", "World", 10);
    test_strlcat("Hello", " World", 6);
    test_strlcat("HelloHello", "World", 5);
    test_strlcat("123456789", "abcdef", 15);
    test_strlcat("", "", 1);
    test_strlcat("A", "B", 2);
}
*/
