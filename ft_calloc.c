#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*str;
	size_t	total_size;
	size_t	i;

	i = 0;
	total_size = nmemb * size;
	str = malloc(total_size);
	if (!str)
		return (NULL);
	while (i < total_size)
	{
		str[i] = 0;
		i++;
	}
	return(str);
}
 