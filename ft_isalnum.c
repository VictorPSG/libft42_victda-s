/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victda-s <victda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:35:38 by victda-s          #+#    #+#             */
/*   Updated: 2024/10/28 23:11:53 by victda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c);
int	ft_isdigit(int c);

int	ft_isalnum(char c)
{
	if (ft_isdigit(c) == 1 || ft_isalpha(c) == 1)
		return (1);
	return (0);
}
