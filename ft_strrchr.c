#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char *end;

	end = s;
	while(*end)
		end++;
	while (end >= s)
	{
		if (*end == (char) c)
		{
			return ((char *)end);
		}
		end--;
	}
	return (NULL);
}
/*
int	main(void)
{
	char *res;
	char *str = "mange ma be";
	char c = 'a';

	res = ft_strrchr(str, c);
	if (res != NULL)
		printf("On a trouvé le foutu '%c' à partir de \"%s\"\n", c, res);
	else
		printf("On n'a pas trouvé '%c', chef!\n", c);
	return (0);
} */
