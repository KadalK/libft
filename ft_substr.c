#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	unsigned int	total_size;
	size_t	i;

	i = 0;
	total_size = (unsigned int)ft_strlen(s);
	if (start >= total_size)
	{
		sub = malloc(1);
		if (!sub)
			return (NULL);
		sub[0] = '\0';
		return (sub);
	}

	if (len > total_size - start)
		len = total_size - start;

	sub = malloc(sizeof (char) * (len + 1));
	if (!sub)
		return (NULL);
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main(int argc, char **argv)
{
	char *result;

	// Vérifie si les arguments sont suffisants
	if (argc != 4)
	{
		printf("Usage: %s <string> <start_index> <length>\n", argv[0]);
		return 1; // Retourne une erreur si les arguments sont incorrects
	}

	// Convertit les arguments en entiers
	unsigned int start = (unsigned int)ft_atoi(argv[2]);
	size_t len = (size_t)ft_atoi(argv[3]);

	// Appelle la fonction ft_substr
	result = ft_substr(argv[1], start, len);

	// Vérifie si la fonction a réussi
	if (result)
	{
		printf("Substring: %s\n", result);
		free(result); // N'oublie pas de libérer la mémoire
	}
	else
	{
		printf("Memory allocation failed.\n");
	}
	return 0;
}
