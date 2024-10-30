/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victda-s <victda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 19:35:54 by victda-s          #+#    #+#             */
/*   Updated: 2024/10/29 21:11:36 by victda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (NULL);
	while (i < n && ((unsigned char *) s)[i] != (unsigned char) c)
	{
		i++;
		if (i == n)
			return (NULL);
	}
	if (((unsigned char *)s)[i] == (unsigned char)c)
		return ((void *)((unsigned char *)s + i));
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     const char str[] = "/|\x12\xff\x09\0\x42\042\0\42|\\";
//     char *result;
//     char ch = '\0';
//     size_t n = 12;  // Tamanho da string sem o terminador nulo

//     // Usando ft_memchr para procurar o caractere 'o'
//     result = (char *)ft_memchr(str, ch, n);
// 	if(ft_memchr(str, ch, n) == memchr(str, ch, n))
// 		printf("são iguais");
// 	else
// 	{
// 		printf("mem: %s\n", (char *)memchr(str, ch, n));
// 		printf("ft: %s\n", (char *)ft_memchr(str, ch, n));
// 	}
//     return 0;
// }
