/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victda-s <victda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 21:08:40 by victda-s          #+#    #+#             */
/*   Updated: 2024/10/21 16:26:25 by victda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	lenght;

	i = 0;
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