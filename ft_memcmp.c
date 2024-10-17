/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victda-s <victda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 20:08:45 by victda-s          #+#    #+#             */
/*   Updated: 2024/10/17 20:38:58 by victda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*p1 = (const unsigned char *)s1;
	const unsigned char	*p2 = (const unsigned char *)s2;

	i = 0;
	while (i < n && p1[i] == p2[i])
		i++;
	if (i != n)
		return (p1[i] - p2[i]);
	return (0);
}
