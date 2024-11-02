#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
/*
int	main(void)
{
	char *str = "Le parmesan c'est les pelures de pied des italiens\n";
	ft_putstr_fd(str, 1);
	return 0;
}*/