#include "libft.h"
#include <stdio.h>
#include <limits.h>
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
	while(temp != 0)
	{
		temp /= 10;
		i++;
	}
	return (i + 1);
}

char 	*ft_itoa(int n)
{
	char 	*array_num;
	int	i;
	int	len;

	array_num = (char *) malloc(count_dig(n));
	if(!array_num)
		return NULL;
	len = count_dig(n) - 1;
	i = len - 1;
	if (n < 0)
	{
		if (n == -2147483648)
		{
			array_num[i--] = '8';
			n = n / 10;
		}
		array_num[0] = '-';
		n = -n;
	}
	while (n > 9)
	{
		array_num[i--] = '0' + (n % 10);
		n = n / 10;
	}
	array_num[i--] = '0' + n;
	array_num[len] = '\0';
	return((char *)array_num);
}


int	main(void)
{
	// printf("%d\n", count_dig());
	printf("%s", ft_itoa(-120124234));
}

