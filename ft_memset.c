/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victda-s <victda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 21:36:45 by victda-s          #+#    #+#             */
/*   Updated: 2024/10/16 13:56:03 by victda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, int num)
{
	int	i;

	i = 0;
	while (i < num)
		((unsigned char *)ptr)[i++] = (unsigned char)value;
	return (ptr);
}
