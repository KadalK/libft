/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kapinarc <kapinarc@strudent.42lyon.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:50:32 by kapinarc          #+#    #+#             */
/*   Updated: 2024/11/04 16:06:00 by kapinarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_size(int n, int *size)
{
	if (n < 0)
	{
		*size += 1;
		n *= 1;
	}
	if (n >= 10)
	{
		ft_size(n / 10, size);
		*size += 1;
	}
	if (n < 10)
		*size += 1;
}

static void	ft_fil(int n, char *str, int *i)
{

	if (n < 0)
	{
		n *= -1;
		str[*i] = '-';
		(*i)++;
	}
	if (n >= 10)
	{
		ft_fil(n / 10, str, i);
		str[*i] = n % 10 + 48;
		(*i)++;
	}
	if (n < 10)
	{
		str[*i] = n + 48;
		(*i)++;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		size;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = 0;
	size = 0;
	ft_size(n, &size);
	str = ft_calloc(size + 1, sizeof(char));
	if (!str)
		return (NULL);
	ft_fil(n, str, &i);
	return (str);
}
/*
int	main(void)
{
	int	n = 5454;
	char	*str = ft_itoa(n);
	printf("%s\n", str);
	free (str);
	return (0);
}
*/