#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	len_s1;
	size_t	len_s2;

	if(!s1 || !s2)
		return (NULL);

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);

	join = malloc(sizeof(char) * len_s1 + len_s2 + 1);
	if (!join)
		return (NULL);
	ft_strlcpy(join, s1, len_s1 + 1);
	ft_strlcpy(join + len_s1, s2, len_s2 + 1);
	return (join);
}