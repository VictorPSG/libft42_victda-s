/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victda-s <victda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 18:25:03 by victda-s          #+#    #+#             */
/*   Updated: 2024/10/18 19:27:31 by victda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	lenght;

	i = 0;
	lenght = ft_strlen(s);
	if (c == '\0')
		return ((char *)&s[lenght]);
	while (s[i] && s[i] != c)
	{
		i++;
		if (i == lenght)
			return (NULL);
	}
	return ((char *)&s[i]);
}
/*
int main() {
    char str[] = "bonjor";
    char *ptr;

    // Procurando a primeira ocorrência da letra 'W'
    ptr = ft_strchr(str, '\0');

    if (ptr != NULL) {
        printf("A primeira ocorrência de 'W' está em: %s\n", ptr);
    } else {
        printf("'W' não encontrado na string.\n");
    }

    return (0);
}
*/