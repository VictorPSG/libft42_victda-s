/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victda-s <victda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:09:05 by victda-s          #+#    #+#             */
/*   Updated: 2024/10/26 17:09:25 by victda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <stdio.h>
#include <unistd.h>

static int	count_dig(int nb)
{
	int	i;
	int	temp;

	i = 0;
	temp = nb;
	if (nb == 0)
		return (2);
	if (nb < 0)
		i++;
	while (temp != 0)
	{
		temp /= 10;
		i++;
	}
	return (i + 1);
}

char	*ft_itoa(int n)
{
	char	*array_num;
	int		len;

	array_num = (char *)malloc(count_dig(n));
	if (!array_num)
		return (NULL);
	len = count_dig(n) - 1;
	array_num[len--] = '\0';
	if (n < 0)
	{
		if (n == -2147483648)
		{
			array_num[len--] = '8';
			n = n / 10;
		}
		array_num[0] = '-';
		n = -n;
	}
	while (n > 9)
	{
		array_num[len--] = '0' + (n % 10);
		n = n / 10;
	}
	array_num[len--] = '0' + n;
	return ((char *)array_num);
}
/*
int	main(void)
{
	// printf("%d\n", count_dig());
	printf("%s", ft_itoa(120124234));
}
*/