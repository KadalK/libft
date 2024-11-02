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
	if (n >=10)
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
	int size;
	char *str;
	int	i;


	i = 0;
	size = 0;
	ft_size(n, &size);
	str = ft_calloc(size + 1, sizeof(char));
	if (!str)
		return (NULL);
	ft_fil(n, str, &i);
	return(str);
}

int	main(void)
{
	int n = 5454;
	char *str = ft_itoa(n);
	printf("%s\n", str);
	free (str);
	return (0);
}
