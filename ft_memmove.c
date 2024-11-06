/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kapinarc <kapinarc@strudent.42lyon.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:50:32 by kapinarc          #+#    #+#             */
/*   Updated: 2024/11/04 16:17:00 by kapinarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	const char	*s;

	if (src > dest)
		dest = ft_memcpy(dest, src, n);
	else
	{
	d = (char *) dest;
	s = (const char *) src;
		while (n > 0)
		{
		n--;
		d[n] = s[n];
		}
	}
		return (dest);
}
/*
int	main()
{
	char src_buff[20] = "123456789123456789";
	char dest_buff[20] = "trouduc";

	ft_memmove(src_buff, dest_buff, 5);

	printf("%s\n", src_buff);
	return 0;
}
*/