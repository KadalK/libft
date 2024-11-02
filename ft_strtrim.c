#include "libft.h"

static size_t	ft_in_set(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*trim;

	if (!s1 || !set)
		return (NULL);

	i = 0;
	j = ft_strlen(s1);
	k = 0;

	while (s1[i] && ft_in_set(s1[i], set))
		i++;
	while (j > i && ft_in_set(s1[j - 1], set))
		j--;
	trim = malloc(sizeof(char) * (j - i + 1));
	if (!trim)
		return(NULL);
	while (i <= j)
		trim[k++] = s1[i++];
	trim[k] = '\0';
	return (trim);
}