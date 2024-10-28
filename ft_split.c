/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victda-s <victda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:53:32 by victda-s          #+#    #+#             */
/*   Updated: 2024/10/28 19:48:28 by victda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char **split_alloc(int num_str)
{
	char		**split;
	int		i;

	i = 0;
	if(!(split = (char **)malloc(num_str * sizeof(char *))))
		return (NULL);
	// while(i < num_str)
	// {
	// 	split[i] = (char *)malloc(num_char * sizeof(char));
	// 	if(!split[i])
	// 	{
	// 		while (i > 0)
	// 		{
	// 			i--;
	// 			free(split[i]);
	// 		}
	// 		free(split);
	// 		return (NULL);
	// 	}
	// 	i++;
	// }
	return (split);
}
static int	count_str(const char *s, char c, char **split)
{
	int	count;
	int	temp;
	int	temp_i;
	int	i;

	count = 0;
	temp = 0;
	temp_i = 0;
	i = 0;
	while(s[i])
	{
		temp = i;
		if(s[i] == c)
			i++;
		else
		{
			count++;
			while(s[i] && s[i] != c)
				i++;
			temp_i = i;
			// if(temp > 0)
			// {
			// 	temp -= 1;
			// 	temp_i = i - 1;
			// }
			split[count - 1] = ft_substr(s, temp, temp_i - temp);
			printf("enderecos words: %d, %d\n valor count: %d\n", temp, temp_i - temp, count);
		}
	}
	return (count);
}
//esgrouvinharão o meu cabelo semana passada
int main(void) {
    const char *str = "esgrouvinharão o meu cabelo semana    passada";
    char delimiter = ' ';
    int num_str = 10; // Número máximo de substrings
    char **split = split_alloc(num_str);

    if (!split) {
        printf("Falha na alocação de memória para split\n");
        return 1;
    }

    int count = count_str(str, delimiter, split);

    // Imprime as substrings armazenadas em split
    printf("Substrings:\n");
    for (int i = 0; i < count; i++) {
        printf("Substring %d: |%s|\n", i + 1, split[i]);
        free(split[i]); // Libera cada substring
    }

    free(split); // Libera o array de ponteiros
    return 0;
}