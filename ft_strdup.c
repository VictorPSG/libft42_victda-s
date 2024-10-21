/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victda-s <victda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:45:23 by victda-s          #+#    #+#             */
/*   Updated: 2024/10/21 19:28:01 by victda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*arr;

	arr = (char *)malloc(ft_strlen(s) + 1);
	if (!arr)
		return (NULL);
	return ((char *)ft_memcpy(arr, (void *)s, ft_strlen(s) + 1));
}
