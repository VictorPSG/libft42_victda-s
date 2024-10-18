/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victda-s <victda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 11:15:51 by victda-s          #+#    #+#             */
/*   Updated: 2024/10/18 15:24:47 by victda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	toNum;
	int	flag;
	const unsigned char *str = (const unsigned char *)nptr;
	
	i = 0;
	toNum = 0;
	flag = 0;
	while((str[i++] && (ft_isdigit(str[i]))) || (str[i] == ' ' && flag == 0) || str[i] == '-' || str[i] == '+')
	{
		while(ft_isdigit(str[i]))
		{
			if(flag == 0)
			{
				flag++;
				if(str[i - 1] == '-')
					flag++;
				toNum = str[i++] - '0';
			}
			else
				toNum = (toNum * 10) + (str[i++] - '0');
			if(!(ft_isdigit(str[i])))
				return toNum * (1 - (flag == 2) * 2);
		}
	}
	return toNum * (1 - (flag == 2) * 2);
}
/*
 #include <stdlib.h>
int	main(void)
{
	const char teste[] = "--54a8";

	printf("resultado: %d", atoi(teste));
	printf("\nresultado ft: %d  \n", ft_atoi(teste));
}
*/





