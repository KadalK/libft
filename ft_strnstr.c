#include "libft.h"

char	*strnstr(const char *  s1 , const char *  s2 , size_t n)
{
	size_t	i;
	size_t	j;

	if (*s2 == '\0')
		return ((char *)s1);

	i = 0;
	while (s1[i] && i < n)
	{
		if (s1[i] == s2[0])
		{
			j = 0;
			while (s2[j] && i + j < n && s1[i + j] == s2[j])
				j++;
			if (s2[j] == '\0')
			return ((char *) &s1[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int	main(int ac, char **av)
{
	char *res;
	size_t len;

	if (ac != 4)
	{
		printf("il faut deux chaines puis de la longueur a comparer !");
		return (1);
	}
	len = (size_t)ft_atoi(av[3]);
	res = strnstr(av[1], av[2], len);

	if (res != NULL)
		printf("j'ai trouvé !! : %s\n", res);
	else
		printf("nop, y a pas \n");
	return (0);
} */