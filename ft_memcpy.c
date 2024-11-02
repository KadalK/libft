#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;
	char *d;
	const char *s;
	d = (char *) dest;
	s = (const char *) src;
	i = 0;
        
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
    char src[20] = "Hello, world!";
    char dest[20];

    // Appel de ft_memcpy
    ft_memcpy(dest, src, 13); // Copie 13 octets

    // Affichage du résultat
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    return 0;
} */
