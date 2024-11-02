#include <stdio.h>

long	ft_atol(const char *str)
{
	int	i;
	int conv;
	long	res;

	res = 0;
	i = 0;
	conv = 1;
	while ((str[i] >= 9 && str[i] <= 13)|| (str[i] == ' '))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			conv *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * conv);
}

int	ft_atoi(char *str)
{
	return ((int)ft_atol(str));
}
/*
int	main(int ac, char **av)
{
	(void)ac;
	printf("%d\n", ft_atoi(av[1]));
	return (0);
} */