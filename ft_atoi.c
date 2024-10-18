/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victda-s <victda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 11:15:51 by victda-s          #+#    #+#             */
/*   Updated: 2024/10/18 16:28:11 by victda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static int	count_sign(const unsigned char *str)
{
	int	i;
	int	sign;

	i = 0;
	sign = 0;
	while (!(ft_isdigit(str[i])) && str[i] != '\0')  // Evitar loop infinito
	{
		if (str[i] == '-' || str[i] == '+')
			sign++;
		i++;
	}
	return (sign);
}

int	ft_atoi(const char *nptr)
{
	int		i;
	int		toNum;
	int		flag;
	const unsigned char *str = (const unsigned char *)nptr;
	
	i = 0;
	toNum = 0;
	flag = 0;
	if (count_sign(str) > 1)
		return (0);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			flag = 1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		toNum = (toNum * 10) + (str[i] - '0');
		i++;
	}
	if (flag == 1)
		toNum = -toNum;
	return toNum (flag == 1) ;
}
/*
 #include <stdlib.h>
int	main(void)
{
	const char teste[] = "054854";

	printf("resultado: %d", atoi(teste));
	printf("\nresultado ft: %d  \n", ft_atoi(teste));
}
*/


