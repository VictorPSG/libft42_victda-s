/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victda-s <victda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:22:55 by victda-s          #+#    #+#             */
/*   Updated: 2024/10/26 18:16:28 by victda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		index_arr;
	char	*arr;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	index_arr = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	arr = (char *)malloc((end - start + 1) * sizeof(char));
	if (!arr)
		return (NULL);
	while (start < end)
		arr[index_arr++] = s1[start++];
	arr[index_arr] = '\0';
	return (arr);
}
// int	main(void)
// {
// 	printf("retorno:%s", ft_strtrim(" lorem ipsum dolor sit amet", "l"));
// }