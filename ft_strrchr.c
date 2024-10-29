/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <victor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 21:08:40 by victda-s          #+#    #+#             */
/*   Updated: 2024/10/29 01:42:42 by victor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	lenght;

	lenght = ft_strlen(s);
	if (c == '\0')
	{
		return ((char *)&s[lenght]);
	}
	while (lenght >= 0)
	{
		if ((char)c == s[lenght])
			return ((char *)&s[lenght]);
		lenght--;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main(void) {
    const char str[] = "bonjour";
	char c = 'o';
    char *result = ft_strrchr(str, c);

    if (result != NULL) {
        printf("Última ocorrência de %c: %s\n", c, result);
    } else {
        printf("'%c' não encontrado.\n", c);
    }

    return 0;
}
*/