/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victda-s <victda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 19:19:31 by victda-s          #+#    #+#             */
/*   Updated: 2024/10/17 20:00:03 by victda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	i2;

	i = 0;
	i2 = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		while (big[i] == little[i2] && i < len)
		{
			i++;
			i2++;
			if (little[i2] == '\0')
				return ((char *)&big[i - i2]);
		}
		i++;
		i2 = 0;
	}
	return (NULL);
}