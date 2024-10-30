/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victda-s <victda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:53:32 by victda-s          #+#    #+#             */
/*   Updated: 2024/10/30 15:35:52 by victda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_split(char **split, int len)
{
	int	i;

	i = 0;
	while (i < len)
		free(split[i++]);
	free(split);
}

static char	**split_alloc(int num_str)
{
	char	**split;

	split = (char **)malloc(num_str * sizeof(char *));
	if (!split)
		return (NULL);
	return (split);
}

static int	count_words(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	**split_str(const char *s, char c, char **split)
{
	int	count;
	int	start;
	int	end;
	int	i;

	count = 0;
	start = 0;
	i = 0;
	while (s[i])
	{
		start = i;
		if (s[i] == c)
			i++;
		else
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
			end = i;
			split[count - 1] = ft_substr(s, start, end - start);
			if (!split[count - 1])
				free_split(split, count - 1);
		}
	}
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (!s)
		return (NULL);
	split = split_alloc(count_words(s, c) + 1);
	if (!split)
		return (NULL);
	split_str(s, c, split);
	split[count_words(s, c)] = NULL;
	return (split);
}
// esgrouvinharão o meu cabelo semana passada
// int main(void) {
//     const char *str = "esgrouvinharão o meu cabelo semana passada";
//     char delimiter = ' ';
// //     printf("%d\n", count_words(str,delimiter));

//     // Chama ft_split para dividir a string
//     char **result = ft_split(str, delimiter);
//     if (!result) {
//         printf("Erro na alocação de memória.\n");
//         return (1);
//     }

//     // Imprime as substrings
//     printf("Substrings resultantes de ft_split:\n");
//     int i = 0;
//     while (result[i]) {
//         printf("Substring %d: %s\n", i + 1, result[i]);
//         free(result[i]);  // Libera cada substring
//         i++;
//     }

//     free(result);  // Libera o array de ponteiros
//     return (0);
// }