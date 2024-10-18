/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victda-s <victda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 11:15:51 by victda-s          #+#    #+#             */
/*   Updated: 2024/10/18 18:13:13 by victda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_sign(const unsigned char *str)
{
	int	i;
	int	sign;

	i = 0;
	sign = 0;
	while (!(ft_isdigit(str[i])) && str[i] != '\0')
	{
		if (str[i] == '-' || str[i] == '+')
			sign++;
		i++;
	}
	return (sign);
}

int	ft_atoi(const char *nptr)
{
	int					i;
	int					to_num;
	int					flag;
	const unsigned char	*str = (const unsigned char *)nptr;

	i = 0;
	to_num = 0;
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
		to_num = (to_num * 10) + (str[i++] - '0');
	if (flag == 1)
		to_num = -to_num;
	return (to_num);
}
/*
 #include <stdlib.h>
int	main(void)
{
	const char	teste[] = "054854";

	printf("resultado: %d", atoi(teste));
	printf("\nresultado ft: %d  \n", ft_atoi(teste));
}
*/
