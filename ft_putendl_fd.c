#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

int	main(void)
{
	char *str = "Le parmesan c'est les pelures de pied des italiens";
	ft_putendl_fd(str, 1);
	return 0;
}