/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victda-s <victda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:33:14 by victda-s          #+#    #+#             */
/*   Updated: 2024/10/17 18:57:40 by victda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	lenghtdst;
	size_t	lenghtsrc;

	i = 0;
	lenghtdst = ft_strlen(dst);
	lenghtsrc = ft_strlen(src);
	if (size <= lenghtdst)
		return (size + lenghtsrc);
	while (lenghtdst + i < size - 1 && src[i])
	{
		dst[lenghtdst + i] = src[i];
		i++;
	}
	dst[lenghtdst + i] = '\0';
	return (lenghtdst + lenghtsrc);
}
