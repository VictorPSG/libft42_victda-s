/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victda-s <victda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 16:12:11 by victda-s          #+#    #+#             */
/*   Updated: 2024/10/30 15:41:05 by victda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	int	array_num[11];
	int	i;

	i = 0;
	if (fd < 0)
		return ;
	if (nb < 0)
	{
		write(fd, "-", 1);
		if (nb == -2147483648)
		{
			array_num[i++] = '8';
			nb = -214748364;
		}
		nb = -nb;
	}
	while (nb > 9)
	{
		array_num[i++] = '0' + (nb % 10);
		nb = nb / 10;
	}
	array_num[i++] = '0' + nb;
	while (i > 0)
		write(fd, &array_num[--i], 1);
}
// int	main(void)
// {
// 	ft_putnbr_fd (132);
// 	printf("\n");
// 	//ft_putnbr();
// }
