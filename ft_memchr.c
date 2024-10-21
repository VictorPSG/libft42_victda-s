/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victda-s <victda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 19:35:54 by victda-s          #+#    #+#             */
/*   Updated: 2024/10/21 20:46:58 by victda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	size_t	lenght;

	i = 0;
	lenght = ft_strlen(s) - 1;
	if (c == '\0')
		return ((char *)&s[lenght]);
	while (i < n && ((unsigned char *) s)[i] != (unsigned char) c)
	{
		i++;
		if (i == n)
			return (NULL);
	}
	return ((void *)&s[i]);
}
/*
#include <stdio.h>

int main(void)
{
    const char str[] = "bonjourno";
    char *result;
    char ch = '';
    size_t n = 2;  // Tamanho da string sem o terminador nulo

    // Usando ft_memchr para procurar o caractere 'o'
    result = (char *)ft_memchr(str, ch, n);
    if (result != NULL)
        printf("ft_memchr: Caractere '%c' encontrado: %s\n", ch, result);
    else
        printf("ft_memchr: Caractere '%c' não encontrado.\n", ch);

    return 0;
}
*/