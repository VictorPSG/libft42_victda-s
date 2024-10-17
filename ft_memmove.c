/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victda-s <victda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:59:22 by victda-s          #+#    #+#             */
/*   Updated: 2024/10/17 14:54:58 by victda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, void *src, int n)
{
	int	i;
	int	lenght;

	i = 0;
	lenght = 0;
	if (dest < src)
		ft_memcpy(dest, src, n);
	else
	{
		while (n > 0)
		{
			lenght = strlen(src);
			((unsigned char *)dest)[i++] = ((unsigned char *)src)[i++];
		}
	}
	return (dest);
}
/*
int	main(void)
{
	char	teste[] = "ABCDEFGHI";

	char	teste1[] = "ABCDEFGHI"; // Corrigido para ser um array de caracteres
	printf("%s\n", teste);
	// Usando memmove corretamente
	ft_memmove(teste + 3, teste, 5);
		// Movendo os primeiros 5 caracteres para a posição a partir do índice 3
	memmove(teste1 + 3, teste1, 5);  // Corrigido para usar memmove
	// Imprimindo o resultado
	printf("%s\n", teste);  // Saída esperada: "ABCABCDEI"
	printf("%s\n", teste1); // Saída esperada: "ABCABCDEI"
	return (0);
}

*/