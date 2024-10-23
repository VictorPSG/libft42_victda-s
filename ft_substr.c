/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victda-s <victda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:17:33 by victda-s          #+#    #+#             */
/*   Updated: 2024/10/23 19:22:44 by victda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*arr;
	size_t	i;
	size_t	str_len;
	size_t	max_len;

	i = 0;
	if (!s)
		return (NULL);
	str_len = ft_strlen(s);
	if (start >= str_len)
		return (ft_strdup(""));
	max_len = str_len - start;
	if (len > max_len)
		len = max_len;
	arr = (char *)malloc(len + 1);
	if (!arr)
		return (NULL);
	while (i < len && s[start + i] != '\0')
	{
		arr[i] = s[start + i];
		i++;
	}
	arr[len] = '\0';
	return (arr);
}
