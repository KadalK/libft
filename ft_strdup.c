#include "libft.h"

char	*strdup(const char *s)
{
	size_t	len;
	size_t	i;
	char *dup;

	i = 0;
	len = ft_strlen(s) + 1;

	dup = malloc(sizeof(char) * len);
	if(!dup)
		return (NULL);
	while(s[i])
	{
		dup[i] = s[i];
		i++;
	}
	
	dup[i] = '\0';
	return (dup);
}