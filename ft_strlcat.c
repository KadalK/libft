#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	i = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);

	if (size <= dest_len)
		return (size + src_len);

	while (src[i] && (dest_len + i + 1) < size)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
/*
int main(void)
{
    char dest[20] = "Hello, ";
    char src[] = "world!";

    // Utilise ft_strlcat
    size_t result = strlcat(dest, src, sizeof(dest));

    // Affiche le résultat
    printf("Result: %s\n", dest);
    printf("Total length: %zu\n", result);

    return 0;
}*/
