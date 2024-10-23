/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victda-s <victda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:27:46 by victda-s          #+#    #+#             */
/*   Updated: 2024/10/23 20:29:26 by victda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len_s1;
	int		len_s2;
	int		i;
	char	*arr;

	i = 0;
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	arr = (char *)malloc(len_s1 + len_s2 + 1);
	if (!arr)
		return (NULL);
	while (s1[i])
	{
		arr[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		arr[len_s1] = s2[i];
		len_s1++;
		i++;
	}
	arr[len_s1] = '\0';
	return (arr);
}

// #include <stdio.h>

// int main(void)
// {
//     char *s1 = "jere";
//     char *s2 = "goms";

//     // Usando a função ft_strjoin para concatenar s1 e s2
//     char *joined_str = ft_strjoin(s1, s2);

//     // Verificando se a função retornou uma string válida
//     if (joined_str)
//     {
//         printf("String concatenada: %s\n", joined_str);
//         // Liberar a memória alocada dinamicamente
//         free(joined_str);
//     }
//     else
//     {
//         printf("Erro: Falha ao concatenar as strings.\n");
//     }

//     return (0);
// }
