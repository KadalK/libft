#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}
/*
int	main(void)
{
	char *res;
	char *str = "mange ma beteu";
	char c = 't';

	res = ft_strchr(str, c);
	if (res != NULL)
		printf("On a trouvé le foutu '%c':v\n", c);
	else
		printf("On a pas trouvé '%c' chef! :v\n", c);
	return (0);
} */