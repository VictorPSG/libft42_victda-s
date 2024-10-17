/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victda-s <victda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:43:21 by victda-s          #+#    #+#             */
/*   Updated: 2024/10/17 16:58:45 by victda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	lenght;

	i = 0;
	lenght = ft_strlen(src);
	if (size == 0)
		return (lenght);
	while (i < size - 1 && lenght > i)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (lenght);
}
