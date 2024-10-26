/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victda-s <victda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:22:55 by victda-s          #+#    #+#             */
/*   Updated: 2024/10/26 17:10:45 by victda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		i2;
	int		index_arr;
	char	*arr;

	i = 0;
	i2 = ft_strlen(s1);
	index_arr = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (s1[i2 - 1] && ft_strchr(set, s1[i2 - 1]))
		i2--;
	arr = (char *)malloc((i2 - i) + 1);
	if (!arr)
		return (NULL);
	printf("i: %s\n", ft_strchr(set, s1[i2 - i]));
	printf("i2: %d\n", i2);
	while (i < i2)
	{
		arr[index_arr] = s1[i];
		i++;
		index_arr++;
	}
	arr[index_arr] = '\0';
	return (arr);
}

int	main(void)
{
	printf("retorno:%s", ft_strtrim(" lorem ipsum dolor sit amet", "l"));
}
