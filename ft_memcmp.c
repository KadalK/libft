/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kapinarc <kapinarc@strudent.42lyon.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:50:32 by kapinarc          #+#    #+#             */
/*   Updated: 2024/11/04 16:09:16 by kapinarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return ((int)str1[i] - (int)str2[i]);
		i++;
	}
	return ((int)str1[i] - (int)str2[i]);
}
/*
int	main(int ac, char **av)
 {
 	if (ac != 3)
 	{
 		printf("Il me faut deux chaines a comparer idiot !\n");
 		return (1);
 	}
 	const char *str1 = av[1];
 	const char *str2 = av[2];

 	size_t n;
 	if (strlen(str1) < strlen(str2))
 		n = strlen(str1);
 	else
 		n = strlen(str2);

 	int res = ft_memcmp(str1,str2, n);

 	if (res == 0)
 		printf("%s et %s sont pareils \n", str1, str2);
 	else if (res < 0)
 		printf("%s est inferieur a %s \n", str1, str2);
 	else
 		printf("%s est superieur a %s \n", str1, str2);
 	return 0;
 }*/