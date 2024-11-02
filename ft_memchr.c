#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	unsigned char *ptr;

	if (s == NULL)
		return (NULL);

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *) ptr + i);
		i++;
	}
	return (NULL);
}
/*
#include <string.h>

int	main(void)
{
	// tester avec une chaine de char
	char str[] = "T un malade Bernard";
	char c = 'B';
	char *res;

	res = ft_memchr(str, c, strlen(str));
	if (res != NULL)
		printf("Y a un '%c'  c'est evident\n", c);
	else
		printf("Y a pas de '%c' c'est evident\n", c);

	// tester avec un tab
	int tab[] = {6, 9, 1, 0};
	int find = 6;
	int *tab_res;

	tab_res = ft_memchr(tab, find, 4);
	if (tab_res != NULL)
		printf("Y a un %d c'est evident\n", find);
	else
		printf("Y a pas de %d c'est evident\n", find);
	return (0);
} */