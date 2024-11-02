#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}
 /*
int main(int ac, char **av)
{
	if (ac < 2)
	{
		return (0);
	}


	ft_bzero(av[1], 5);
	printf("%s\n", av[1]);
	return (0);
} */